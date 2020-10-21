#include <iostream>

using namespace std;

class Matrix {
	public:
		Matrix();
		~Matrix();
		
	public:
		void print();
		void print(string matrixName);
		
	private:
		double**  matrix_;
		int row_;
		int column_;
};
