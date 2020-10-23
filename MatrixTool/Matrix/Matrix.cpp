#include <iostream>
#include <cmath>
#include "Matrix.h"

using namespace std;

//全局函数定义
Matrix to_matrix(double* array, int column) {
	Matrix mat(1, column);
	
	try {
		if (mat.column_ != column) 
			throw "row or column error";
			
		for (int i = 0; i < mat.column_; i++) {
			mat.matrix_[0][i] = array[i];
		}
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return mat;
}  

//构造和析构 
Matrix::Matrix(int column) {
	row_ = 1;
	column_ = column;
	matrix_ = new double*[1];
	
	matrix_[0] = new double[column];
		
	for (int j = 0; j < column; j++) {
		matrix_[0][j] = 0.0;
	} 
}

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

// 静态成员函数定义 

double Matrix::Min(Matrix &mat) {
	double min = mat.matrix_[0][0];
	
	for (int i = 0; i < mat.row_; i++) {
		for (int j = 0; j < mat.column_; j++) {
			if (mat.matrix_[i][j] < min) 
				min = mat.matrix_[i][j];
		}
	}
	
	return min;
}

double Matrix::Max(Matrix &mat) {
	double max = mat.matrix_[0][0];
	
	for (int i = 0; i < mat.row_; i++) {
		for (int j = 0; j < mat.column_; j++) {
			if (mat.matrix_[i][j] > max) 
				max = mat.matrix_[i][j];
		}
	}
	
	return max;
}

double Matrix::Sum(Matrix &mat) {
	double sum = 0;
	
	for (int i = 0; i < mat.row_; i++) {
		for (int j = 0; j < mat.column_; j++) {
			sum += mat.matrix_[i][j];
		}
	}
	
	return sum;
}

Matrix Matrix::Exp(Matrix &mat) {
	Matrix res = mat;
	
	for (int i = 0; i < mat.row_; i++) {
		for (int j = 0; j < mat.column_; j++) {
			res.matrix_[i][j] = exp(mat.matrix_[i][j]);
		}
	}
	
	return res;
}

// private 接口定义

double Matrix::getElement(int row, int column) {
	if (row < 0 || row > row_ - 1 || column < 0 || column > column_ - 1) 
		throw "indix error";
	
	return matrix_[row][column];
} 

// public 类接口定义 

void Matrix::valueOfArray(double* array) {
	for (int i = 0; i < column_; i++) {
		matrix_[0][i] = array[i];
	}
}

void Matrix::addWith(Matrix &mat) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = matrix_[i][j] + mat.matrix_[i][j];
		}
	}
}

void Matrix::subWith(Matrix &mat) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = matrix_[i][j] - mat.matrix_[i][j];
		}
	}
}

double Matrix::at(int row, int column) {
	int element;
	
	try {
		element = getElement(row, column);
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return element;
}

void Matrix::shape() {
	cout << "shape:" << '(' << row_ << ',' << column_ << ')' << endl;
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

void Matrix::input() {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			cin >> matrix_[i][j];
		}
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
