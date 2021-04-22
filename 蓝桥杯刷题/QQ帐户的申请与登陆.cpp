#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
	map<int, string> MSG;
	int n;
	
	cin >> n;
	
	char key;
	int a;
	string p;
	for (int i = 0; i < n; i++) {
		cin >> key >> a >> p;
		switch (key) {
			case 'N':
				if (MSG.find(a) == MSG.end()) {
					MSG.insert({a, p});
					cout << "New: OK" << "\n";
				} else {
					cout << "ERROR: Exist" << "\n";
				}
				break;
			case 'L':
				if (MSG.find(a) != MSG.end() && MSG.find(a)->second == p) {
					cout << "Login: OK" << "\n";
				} else if (MSG.find(a) == MSG.end()) {
					cout << "ERROR: Not Exist" << "\n";
				} else if (MSG.find(a) != MSG.end() && MSG.find(a)->second != p) {
					cout << "ERROR: Wrong PW" << "\n";
				}
				break;	
		}
	}
	
	return 0;
}
