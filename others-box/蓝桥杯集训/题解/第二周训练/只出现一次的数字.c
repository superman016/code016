#include <stdio.h>

int main() {
	int arr[100];
	int table[10];
	int N;
	
	int i;
	for (i = 0; i < 10; i++) {
		table[i] = 0;
	}
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		int in = arr[i];
		table[in]++;
	}
	
	for (i = 0; i < N; i++) {
		int in = arr[i];
		if (table[in] == 1) {
			printf("%d", arr[i]);
			break;
		} 
	}
	
	return 0;
}
