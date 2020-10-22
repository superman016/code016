#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>

using namespace std;

class Matrix {
	//矩阵类 
	template<typename TT>
	friend Matrix to_matrix(TT array, int row, int column);
	template<typename T>
	friend Matrix to_matrix(T array, int column);
	
	public:
		Matrix(int column);
		Matrix(int row, int column);
		Matrix(const Matrix &mat);
		~Matrix();

	public:
		static double Min(Matrix &mat);
		static double Max(Matrix &mat);
		static double Sum(Matrix &mat);
		static Matrix Exp(Matrix &mat);
		double at(int row, int column);
		template<typename TT>
		void of_array(TT array) {
			for (int i = 0; i < row_; i++) {
				for (int j = 0; j < column_; j++) {
					matrix_[i][j] = array[i][j];
				}
			}
		}
		void shape();
		void input();
		void print();
		void print(string matrixName);
		
	private:
		double getElement(int row, int column);
		
		template<typename T>
		void set(T array, int column) {
			if (1 != row_ || column_ != column) 
				throw "row or column error";
			
			for (int i = 0; i < column_; i++) {
				matrix_[0][i] = array[i];
			}
		}
		
		template<typename TT>
		void set(TT array, int row, int column) {
			if (row != row_ || column_ != column) 
				throw "row or column error";
			
			for (int i = 0; i < row_; i++) {
				for (int j = 0; j < column_; j++) {
					matrix_[i][j] = array[i][j];
				}
			}
		}
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};

//使用类模板自动推导二维数组类型 
template<typename TT>
Matrix to_matrix(TT array, int row, int column) {
	Matrix mat(row, column);
	
	try {
		mat.set(array, row, column);
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return mat;
}

template<typename T>
Matrix to_matrix(T array, int column) {
	Matrix mat(1, column);
	
	try {
		mat.set(array, column);
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return mat;
} 

#endif // _MATRIX_H_
