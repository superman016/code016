#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double sum = 0.0;
	int year, time, base, more_time;
	
	cin >> year >> time;
	
	if (year >= 5) {
		base = 50;
		if (time > 40) {
			more_time = time - 40;
			sum = 40.0 * base + double(more_time) * double(base) * 1.5;
		} else {
			sum = time * base;	
		}
	} else {
		base = 30;
		if (time > 40) {
			more_time = time - 40;
			sum = 40.0 * base + double(more_time) * double(base) * 1.5;
		} else {
			sum = time * base;	
		}
	}
	
	printf("%.2lf", sum);
	
	return 0;
}
