#include <iostream>
#include <vector>
#include <set>

using namespace std;	

int main() {
	int n, key, value, layer, result = 0;
	vector<pair<int, int>> node;
	set<int> ass;
	vector<int> tally(101);
	
	cin >> n;
	
	for (int i = 0; i < n - 1; i++) {
		cin >> key >> value;
		ass.insert(key);
		node.emplace_back(pair<int, int>(key, value));
	}
	
	int MAX = node.size();
	layer = ass.size();
	
	for (int i = 0; i < layer; i++) {
		for (int j = 0; j < MAX; j++) {
			if (node[j].first == *ass.begin()) {
				tally[i]++;
			}
		}
		if (!ass.empty()) {
			ass.erase(ass.begin());
		} else {
			break;
		}	
	}
	
	for (int i = 0; tally[i] != 0; i++) {
		result += tally[i] * (i + 1);
	}
	
	cout << result;
	
	return 0;
} 
