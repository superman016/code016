#include <stdio.h>
#include <stdlib.h>

int cmp(const void* x, const void* y) {
	return *(int*)x - *(int*)y;
}

int main() {
	int arr[1024];
	int length = 0;
	int sum = 0;
	double mid;
	double avg;
	
	while (scanf("%d", &arr[length]) && arr[length] != 0) {
		sum += arr[length];
		length++;
	}
	
	qsort(arr, length, sizeof(int), cmp);
	
	avg = sum / length;
	
	if (length % 2 == 0) {
		mid = (arr[(length / 2)] + arr[(length / 2 - 1)]) / 2;
	} else {
		mid = arr[length / 2];
	}

	if (mid > avg) {
		printf("Yes");
	} else {
		printf("No");
	}
	
	return 0;
}

/*
	test:
	
	200 100 -100 300 400 -200 0
*/
