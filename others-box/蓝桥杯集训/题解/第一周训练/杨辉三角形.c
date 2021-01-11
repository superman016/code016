#include <stdio.h>
#include <stdlib.h>

int matrix[35][35];

int main() {
	int num, i, j;
	
	scanf("%d", &num);
	
	for (i = 0; i < num + 1; i++) {
		for (j = 0; j < num + 1; j++) {
			matrix[i][j] = 0;
		}
	}
	
	matrix[1][1] = 1;
	for (i = 1; i < num + 1; i++) {
		for (j = 1; j < num + 1; j++) {
			if (i == 1 && j == 1) continue;
			else {
				matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
			}
		}
	}
	
	for (i = 1; i < num + 1; i++) {
		for (j = 1; j < num + 1; j++) {
			if (matrix[i][j] != 0) {
				printf("%d ", matrix[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
