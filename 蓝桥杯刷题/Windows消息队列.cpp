#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

bool cmp_by_num(pair<string, int> &a, pair<string, int> &b) {
	return a.second < b.second;
}

int main() {
	vector<pair<string, int> > MSG;
	int n;
	
	cin >> n;
	
	string key, name;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> key;
		if (key == "GET") {
			if (MSG.empty()) {
				cout << "EMPTY QUEUE!" << "\n";
			} else {
				cout << MSG[0].first << "\n";
				MSG.erase(MSG.begin());
			}
		} else if (key == "PUT") {
			cin >> name;
			cin >> num;
			MSG.push_back(pair<string, int>(name, num));
			sort(MSG.begin(), MSG.end(), cmp_by_num);
		}
	}
	
	return 0;
}
