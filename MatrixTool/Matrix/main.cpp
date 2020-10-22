#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, char** argv) {
	double a[] = {1, 2, 3, 4};
	double b[3][2] = {{1, 1}, {2, 2}, {3, 3}};
	
	Matrix m(to_matrix(b, 3, 2));
	m.print("m");
	
	return 0;
}
