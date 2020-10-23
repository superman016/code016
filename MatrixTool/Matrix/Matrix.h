#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>

using namespace std;

//在 Matrix 类中使用到的模板命名：TT 识别二维数组类型；T 识别一维数组类型。 

class Matrix {
	//矩阵类友元函数 
	template<typename TT>
	friend Matrix to_matrix(TT array, int row, int column);
	friend Matrix to_matrix(double* array, int column);
	
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
		
		Matrix& operator+(Matrix &mat);
		Matrix& operator-(Matrix &mat);
		Matrix& operator*(Matrix &mat);
		Matrix& operator*(double coef);
		Matrix& operator/(Matrix &mat);
		istream& operator>>(istream &in);
		ostream& operator<<(ostream &out); 
		 
		template<typename TT>
		void valueOfArray(TT array);
		void valueOfArray(double* array);
		
		void addWith(Matrix &mat);
		void subWith(Matrix &mat);
		void mulWith(Matrix &mat);
		void mulWith(double coef);
		void divWith(Matrix &mat);
		
		double at(int row, int column);
		void shape();
		void input();
		void print();
		void print(string matrixName);
		
	private:
		double getElement(int row, int column);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};

//使用类模板自动推导数组类型 

template<typename TT>
void Matrix::valueOfArray(TT array) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = array[i][j];
		}
	}
}

template<typename TT>
Matrix to_matrix(TT array, int row, int column) {
	Matrix mat(row, column);
	
	try {
		if (mat.row_ != row || mat.column_ != column) 
			throw "row or column error";
			
		for (int i = 0; i < mat.row_; i++) {
			for (int j = 0; j < mat.column_; j++) {
				mat.matrix_[i][j] = array[i][j];
			}
		}
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return mat;
}

Matrix to_matrix(double* array, int column);

#endif // _MATRIX_H_
