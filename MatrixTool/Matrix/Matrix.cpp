#include <iostream>

#include "Matrix.h"

using namespace std;

Matrix::Matrix() {
	matrix_ = NULL;
	row_ = 0;
	column_ = 0;
}

void Matrix::print() {
	for (int i = 0; i < row_; i++) {
		cout << '{';
		for (int j = 0; j < column_; j++) {
			cout << matrix_[i][j] << ',';
		}
		cout << '}';
		cout << endl;
	}
}

void Matrix::print(string matrixName) {
	cout << matrixName << " = " << endl;
	for (int i = 0; i < row_; i++) {
		cout << '{';
		for (int j = 0; j < column_; j++) {
			cout << matrix_[i][j] << ',';
		}
		cout << '}';
		cout << endl;
	}
}
