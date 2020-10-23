#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, char** argv) {
	double a[] = {1, 2, 3, 4, 5};
	double b[3][2] = {{1, 1}, {2, 2}, {3, 3}};
	
	Matrix m(to_matrix(a, 5));
	cout << ' ';
	m.print("m");
	m.shape();
	cout << Matrix::Sum(m) << endl;
	
	return 0;
}
