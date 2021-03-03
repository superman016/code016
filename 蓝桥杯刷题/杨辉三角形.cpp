#include <iostream>

using namespace std;

int main() {
	int row;
	
	cin >> row;
	
	int matrix[row + 1][row + 1];
	
	for (int i = 0; i < row + 1; i++) {
		for (int j = 0; j < row + 1; j++) {
			matrix[i][j] = 0;
		}
	}
	
	matrix[1][1] = 1;
	
	for (int i = 1; i < row + 1; i++) {
		for (int j = 1; j < row + 1; j++) {
			if (!(i == 1 && j == 1)) {
				matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
			}
		}
	}
	
	for (int i = 0; i < row + 1; i++) {
		for (int j = 0; j < row + 1; j++) {
			if (matrix[i][j] != 0) {
				cout << matrix[i][j] << " ";
			}
		}
		if (i != 0) {
			cout << endl;
		}
	}
	
	return 0;
}
