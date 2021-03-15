#include <iostream>

using namespace std;

int main() {
	int row, column, power;

	cin >> row >> power;
	
	column = row;
	
	int matrix[row][column];
	int temp_matrix[row][column];
	int res_matrix[row][column];
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> matrix[i][j];
			res_matrix[i][j] = matrix[i][j];
		}
	}

	for (int m = 1; m < power; m++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				temp_matrix[i][j] = res_matrix[i][j];
			}
		}
		
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				int res = 0;
				for (int k = 0; k < row; k++) {
					res += temp_matrix[i][k]*matrix[k][j];
				}
				res_matrix[i][j] = res;
			}
		}
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (power == 0) {
				cout << (i == j ? "1 " : "0 ");
			} else {
				cout << res_matrix[i][j] << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
