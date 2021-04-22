#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a, b;
	double res;
	
	cin >> a >> b;
	
	res = (double)a / (double)b;
	
	printf("%d/%.1lf=%d", a, res, b);
	
	return 0;
}
