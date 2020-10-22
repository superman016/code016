#include <iostream>

using namespace std;

class Matrix {
	template<typename T>
	friend Matrix to_matrix(T array, int row, int column);
	
	public:
		Matrix();
		Matrix(int row, int column);
		Matrix(const Matrix &mat);
		~Matrix();

	public:
		void print();
		void print(string matrixName);
		
	private:
		template<typename T>
		void set(T array, int row, int column) {
			if (row != row_ || column_ != column) throw "row or column error";
			
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
template<typename T>
Matrix to_matrix(T array, int row, int column) {
	Matrix mat(row, column);
	
	try {
		mat.set(array, row, column);
	} catch (const char* errorMSG) {
		cout << errorMSG << endl;
	}
	
	return mat;
}
