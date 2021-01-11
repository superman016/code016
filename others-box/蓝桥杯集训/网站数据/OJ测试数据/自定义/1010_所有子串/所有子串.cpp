#include <bits/stdc++.h>

using namespace std;

void printAllSon(string str) {
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < str.size() - i; j++) {
			string son = str.substr(i, j + 1);
			cout << son << endl;
		}
	}
} 


int main() {
	printAllSon("dlmu");
	
	return 0;
}
