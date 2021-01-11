#include <stdio.h>

int main() {
	long long num, i, pre_1 = 1, pre_2 = 1, now = 2;
	
	scanf("%lld", &num);
	
	for (i = 3; i < num; i++) {
		pre_1 = pre_2 % 10007; 	
		pre_2 = now % 10007;
		now = (pre_1 + pre_2) % 10007;
	}
	
	if (num == 1 || num == 2) {
		printf("1");
	} else {
		printf("%lld", now);
	}	
	
	return 0;
}
