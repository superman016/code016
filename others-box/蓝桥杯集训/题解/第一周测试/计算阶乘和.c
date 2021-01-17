#include <stdio.h>

int fun(int num) {
	int res = 1;
	
	int i;
	for (i = num; i > 0; i--) {
		res *= i;
	}
	
	return res;
}

int main() {
	int num, res = 0;
	
	scanf("%d", &num);
	
	int i;
	for (i = num; i > 0; i--) {
		res += fun(i);
	}
	
	printf("%d", res);
	
	return 0;
} 
