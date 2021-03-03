#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	multiset<int> cup;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		cup.insert(value);
	}
	
	for (multiset<int>::iterator it = cup.begin(); it != cup.end(); it++) {
		cout << *it << " ";
	}
	
	return 0;
}
