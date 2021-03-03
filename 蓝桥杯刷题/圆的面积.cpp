#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1.0) * 4; 

int main() {
	int r;
	
	cin >> r;
	
	printf("%.7lf", r * r * PI);
	
	return 0;
}
