#include <stdio.h>

typedef struct PAT {
	char id[20];
	int a;//йт╩З 
	int b;//©╪йт 
} PAT;

int main() {
	PAT arr[1005];
	int n, M;
	
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++) {
		scanf("%s %d %d", &arr[i].id, &arr[i].a, &arr[i].b);
	}
	
	scanf("%d", &M);
	
	int j;
	for (i = 0; i < M; i++) {
		int number;
		scanf("%d", &number);
		for (j = 0; j < n; j++) {
			if (arr[j].a == number) {
				printf("%s %d\n", arr[j].id, arr[j].b);
				break;
			}
		}
	}
	
	return 0;
}
