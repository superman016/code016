#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char name[50];
	int score; 
} Student;

int cmp(const void* x, const void* y) {
	Student stu_1 = *(Student*)x;
	Student stu_2 = *(Student*)y;
	
	if ((strcmp(stu_1.name, "DaDa") == 0 || strcmp(stu_2.name, "DaDa") == 0)
		 && stu_1.score == stu_2.score) {
		if (strcmp(stu_1.name, "DaDa") == 0) {
			return -1;
		} else {
			return 1;
		}
	}
	
	return stu_1.score < stu_2.score;
}

int main() {
	Student stu_arr[105];
	int N, M, i, j, k, m;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%s", &stu_arr[i].name);
		stu_arr[i].score = 0;
	}
	
	scanf("%d", &M);

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			int score;
			char name[50];
			scanf("%d %s", &score, &name);
			for (k = 0; k < N; k++) {
				if (strcmp(stu_arr[k].name, name) == 0) {
					stu_arr[k].score += score;
					break;
				}
			}
		}
		
		qsort(stu_arr, N, sizeof(Student), cmp);
		
		for (m = 0; m < N; m++) {
			if (strcmp(stu_arr[m].name, "DaDa") == 0) {
				printf("%d\n", m + 1);
				break;
			}
		}
	}
	
	return 0;
}
