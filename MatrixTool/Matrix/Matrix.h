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
	friend Matrix operator*(double coef, Matrix &mat);
	friend istream& operator>>(istream &in, Matrix &mat);
	friend ostream& operator<<(ostream &out, Matrix &mat); 
	
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
		
		const Matrix operator-() const;
		Matrix operator+(Matrix &mat);
		Matrix operator-(Matrix &mat);
		Matrix operator*(Matrix &mat);
		 
		template<typename TT>
		void setByArray(TT array);
		void setByArray(double* array);
		
		Matrix get_add_with(Matrix &mat);
		Matrix get_sub_with(Matrix &mat);
		Matrix get_mul_with(Matrix &mat);
		Matrix get_mul_with(double coef);
		
		double at(int row, int column);
		void input();
		void shape();
		void shape(string matrixName);
		void print();
		void print(string matrixName);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};

//使用类模板自动推导数组类型 

template<typename TT>
void Matrix::setByArray(TT array) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = array[i][j];
		}
	}
}

//全局函数 

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
