#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, char** argv) {
	double a[] = {1, 2, 3, 4};
	double b[3][2] = {{1, 1}, {2, 2}, {3, 3}};
	double c[5][5] = {0}; 
	
	Matrix z = to_matrix(a, 4);
	Matrix m = to_matrix(b, 3, 2);
	z.print("z");
	m.print("m");
	z.shape();
	m.shape();
	cout << Matrix::Max(m) << endl;
	cout << Matrix::Sum(z) << endl;
	
	return 0;
}
