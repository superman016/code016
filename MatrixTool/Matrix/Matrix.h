#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>

using namespace std;

//�� Matrix ����ʹ�õ���ģ��������TT ʶ���ά�������ͣ�T ʶ��һά�������͡� 

class Matrix {
	//��������Ԫ���� 
	template<typename TT>
	friend Matrix to_matrix(TT array, int row, int column);
	friend Matrix to_matrix(double* array, int column);//����ά����ת��Ϊ�����࣬��Ҫָ��������к��� 
	
	friend Matrix operator*(double coef, Matrix &mat);
	friend Matrix operator*(Matrix &mat, double coef);
	friend istream& operator>>(istream &in, Matrix &mat);
	friend ostream& operator<<(ostream &out, Matrix &mat);//�����������ڵ���������� 
	
	public:
		Matrix(int column);
		Matrix(int row, int column);
		Matrix(const Matrix &mat);
		~Matrix();

	public:
		static double Min(Matrix &mat);//�����������Ԫ���е���Сֵ 
		static double Max(Matrix &mat);//�����������Ԫ���е����ֵ 
		static double Sum(Matrix &mat);//�����������Ԫ�صĺ� 
		static Matrix Exp(Matrix &mat);//�ֱ��������Ԫ�صĶ������Դ˷���һ������ 
		
		const Matrix operator-() const;
		Matrix operator+(Matrix &mat);
		Matrix operator-(Matrix &mat);
		Matrix operator*(Matrix &mat);
		 
		template<typename TT>
		void setByArray(TT array);
		void setByArray(double* array);//ͨ���������þ����ֵ 
		
		Matrix get_add_with(Matrix &mat);
		Matrix get_sub_with(Matrix &mat);
		Matrix get_mul_with(Matrix &mat);
		Matrix get_mul_with(double coef);//�������ѧ���� 
		
		double at(int column); 
		double at(int row, int column);  //���ؾ����ж�Ӧ�±��Ԫ�� 
		void input();                    //�Ӽ���������� 
		void shape();                    //����������״���к��У� 
		void shape(string matrixName);   //�Զ���������� 
		void print();                    //��ӡ���� 
		void print(string matrixName);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};

//����ģ�庯������ 

template<typename TT>//ʹ����ģ���Զ��Ƶ��������� 
void Matrix::setByArray(TT array) {
	for (int i = 0; i < row_; i++) {
		for (int j = 0; j < column_; j++) {
			matrix_[i][j] = array[i][j];
		}
	}
}

//ȫ��ģ�庯�����弰���� 

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
