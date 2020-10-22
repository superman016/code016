#include <iostream>

using namespace std;

class Matrix {
	public:
		Matrix();
		~Matrix();
		
	public:
		void print(string matrixName);
		void print();
		
	private:
		 
		
	private:
		double* matrix_;
		int row_;
		int column_;
};
