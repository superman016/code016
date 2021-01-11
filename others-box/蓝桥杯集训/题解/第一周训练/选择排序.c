#include <stdio.h>
#include <stdlib.h>

void PrintArr(int* arr, int length) {
	int i, is_first = 1;
	for (i = 0; i < length; i++) {
		if (is_first == 1) {
			printf("%d", arr[i]);
			is_first = 0;
		} else {
			printf(" %d", arr[i]);
		}
	}
	printf("\n");
} 

void SelectSort(int* arr, int length, int i) {
	if (i >= length) return ;
	
	int j, temp, min_in = i;
	for (j = i + 1; j < length; j++) {
		if (arr[j] < arr[min_in]) {
			min_in = j;
		}
	}
	if (min_in != i) {
		printf("swap(a[%d], a[%d]):", i, min_in);
		temp = arr[i];
		arr[i] = arr[min_in];
		arr[min_in] = temp;
		PrintArr(arr, length);
	} else {
		printf("swap(a[%d], a[%d]):", i, min_in);
		PrintArr(arr, length);
	}
	SelectSort(arr, length, i + 1);
}

int main() {
	int n, i;
	
	scanf ("%d", &n);
	
	int arr[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	SelectSort(arr, n, 0);
	
	return 0;
}
