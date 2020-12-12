#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
	int res = 1;
	
	int i;
	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			res = 0;
			break;
		}
	}
	
	return res;
}

int main() {
	int n;
	
	scanf("%d", &n);
	
	if (isPrime(n)) printf("prime");
	else printf("not prime");
	
	return 0;
}

/*
	test:
	
	97
*/
