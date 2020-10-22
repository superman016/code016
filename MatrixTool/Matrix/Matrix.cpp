#include <iostream>

#include "Matrix.h"

using namespace std;

//构造和析构 
Matrix::Matrix(int row, int column) {
	row_ = row;
	column_ = column;
	matrix_ = new double*[row];
	
	for (int i = 0; i < row; i++) {
		matrix_[i] = new double[column];
		for (int j = 0; j < column; j++) {
			matrix_[i][j] = 0.0;
		} 
	}
}

Matrix::Matrix(const Matrix &mat) {
	row_ = mat.row_;
	column_ = mat.column_;
	matrix_ = new double*[mat.row_];
	
	for (int i = 0; i < mat.row_; i++) {
		matrix_[i] = new double[mat.column_];
		for (int j = 0; j < mat.column_; j++) {
			matrix_[i][j] = mat.matrix_[i][j];
		}
	}
}

Matrix::~Matrix() {
	for (int i = 0; i < row_; i++) {
		delete [] matrix_[i];
	}
}

//打印矩阵 
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
