#include <iostream>
#include "Matrix.h"

using namespace std;

int main(int argc, char** argv) {
	double a[3] = {1, 2, 3};
	double b[3][3] = {{1, 9, 7}, {2, 2, 5}, {3, 3, 8}};
	
	Matrix m(3, 3);
	m.setByArray(b);
	
	return 0;
}
