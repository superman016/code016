#include <iostream>

using namespace std;

int main() {
	int row, column;
	
	cin >> row >> column;
	
	for (int i = 0; i < row; i++) {
		int count = 0;
		for (int j = i; j > 0 && count < column; j--) {
			cout << char('A' + j);
			count++;
		}
		for(int k = 0; k < column - i; k++) {
			cout << char('A' + k);
		}
		cout << endl;
	} 
	
	return 0;
}
