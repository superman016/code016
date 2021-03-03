#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, goal;
	map<int, int> cup;
	
	cin >> n;	
	for (int i = 0; i < n; i++) {
		int ele;
		cin >> ele;
		cup.insert({ele, i + 1});
	}
	cin >> goal; 
	
	if (cup.find(goal) == cup.end()) {
		cout << -1;
	} else {
		cout << cup.find(goal)->second;
	}
	
	return 0;
}
