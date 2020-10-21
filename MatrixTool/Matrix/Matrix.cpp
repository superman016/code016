#include <iostream>

#include "Matrix.h"

using namespace std;

template<typename T>
Matrix Matrix::to_matrix(T array) {
	int row, column;
	int* pArray[row];
	
	row = sizeof(array) / sizeof(array[0]);
	column = sizeof(array[0]) / sizeof(array[0][0]);
	
	cout << row << ' ' << column;
	
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			array[i];
//		}
//	}
}

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
