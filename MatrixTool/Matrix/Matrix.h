#include <iostream>

using namespace std;

class Matrix {
	public:
		Matrix();
		~Matrix();
		
	public:
		template<typename T>
		static Matrix to_matrix(T array);
		
		
		void print();
		void print(string matrixName);
		
	private:
		Matrix(double** arr, int row, int column);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};
