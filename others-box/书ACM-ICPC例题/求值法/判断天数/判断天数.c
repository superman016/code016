#include <stdio.h>

int isLeap(int year) {
	int res = 0;
	
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		res = 1;
		
	return res;
}

int getDay(int year, int month, int day) {
	int dayArr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;
	
	int i;
	for (i = 0; i < month - 1; i++) {
		sum += dayArr[i];
	}
	
	if (isLeap(year) == 1 && month > 2) {
		sum += 1;
	}
	
	sum += day;
	
	return sum;
}

int main() {
	int y, m, d;
	
	scanf("%d/%d/%d", &y, &m, &d);
	printf("%d", getDay(y, m, d));
	
	return 0;
}

/*
	test:
	
	2017/1/1
*/
