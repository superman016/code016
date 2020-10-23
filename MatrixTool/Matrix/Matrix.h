#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>

using namespace std;

//在 Matrix 类中使用到的模板命名：TT 识别二维数组类型；T 识别一维数组类型。 

class Matrix {
	//矩阵类友元函数 
	template<typename TT>
	friend Matrix to_matrix(TT array, int row, int column);
	friend Matrix to_matrix(double* array, int column);//将二维数组转化为矩阵类，需要指明数组的行和列 
	
	friend Matrix operator*(double coef, Matrix &mat);
	friend Matrix operator*(Matrix &mat, double coef);
	friend istream& operator>>(istream &in, Matrix &mat);
	friend ostream& operator<<(ostream &out, Matrix &mat);//不可置于类内的运算符重载 
	
	public:
		Matrix(int column);
		Matrix(int row, int column);
		Matrix(const Matrix &mat);
		~Matrix();

	public:
		static double Min(Matrix &mat);//求矩阵中所有元素中的最小值 
		static double Max(Matrix &mat);//求矩阵中所有元素中的最大值 
		static double Sum(Matrix &mat);//求矩阵中所有元素的和 
		static Matrix Exp(Matrix &mat);//分别求矩阵中元素的对数并以此返回一个矩阵 
		
		const Matrix operator-() const;
		Matrix operator+(Matrix &mat);
		Matrix operator-(Matrix &mat);
		Matrix operator*(Matrix &mat);
		 
		template<typename TT>
		void setByArray(TT array);
		void setByArray(double* array);//通过数组设置矩阵的值 
		
		Matrix get_add_with(Matrix &mat);
		Matrix get_sub_with(Matrix &mat);
		Matrix get_mul_with(Matrix &mat);
		Matrix get_mul_with(double coef);//矩阵的数学运算 
		
		double at(int column); 
		double at(int row, int column);  //返回矩阵中对应下标的元素 
		void input();                    //从键盘输入矩阵 
		void shape();                    //输出矩阵的形状（行和列） 
		void shape(string matrixName);   //自定义名字输出 
		void print();                    //打印矩阵 
		void print(string matrixName);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};

//类内模板函数定义 

template<typename TT>//使用类模板自动推导数组类型 
void Matrix::setByArray(TT array) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = array[i][j];
		}
	}
}

//全局模板函数定义及声明 

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
