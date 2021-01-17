#include <stdio.h>
#include <stdlib.h>

int Cmp(const void* x, const void* y) {
	return *(int*)x - *(int*)y;
}

int main() {
	int table_1[101];
	int table_2[101];
	int res[101];
	int N, M, length = 0;
	
	int i;
	for (i = 0; i < 101; i++) {
		table_1[i] = 0;
		table_2[i] = 0;
	}
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		int in;
		scanf("%d", &in);
		table_1[in]++;
	} 
	
	scanf("%d", &M);
	
	for (i = 0; i < M; i++) {
		int in;
		scanf("%d", &in);
		table_2[in]++;
	}
	
	for (i = 0; i < 101; i++) {
		if(table_1[i] != 0 && table_2[i] != 0) {
			res[length] = i;
			length++;
		}
	}
	
	qsort(res, length, sizeof(int), Cmp);
	
	int is_first = 1;
	for (i = 0; i < length; i++) {
		if (is_first == 1) {
			printf("%d", res[i]);
			is_first = 0;
		} else {
			printf(" %d", res[i]);
		}
	}
	
	return 0;
}
