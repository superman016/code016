#include <stdio.h>

int main() {
	int res[10000];
	int len = 0, num, temp;
	int i, j;
	
	scanf("%d", &num);
	
	res[0] = 1;
	
	for (i = 1; i <= num; i++) {
		temp = 0;
		for (j = 0; j <= len; j++) {
			temp += res[j]*i;
			res[j] = temp % 10;
			temp /= 10;
		}
		
		while (temp) {
			len++;
			res[len] = temp % 10;
			temp /= 10;
		}
	}
	
	for (i = len; i >= 0; i--) {
		printf("%d", res[i]);
	}
	
	return 0;
}
/*
	test:
	
	9
*/
