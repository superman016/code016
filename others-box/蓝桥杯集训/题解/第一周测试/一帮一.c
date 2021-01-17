#include <stdio.h>

typedef struct Student {
	int flag;//标记是否已组队 
	int gender;
	char name[10];
} Student;

int main() {
	int n;
	Student stu[55];
	
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d %s", &stu[i].gender, &stu[i].name);
		stu[i].flag = 0;
	}
	
	int j;
	for (i = 0; i < n / 2; i++) {	
		for (j = n - 1; j > n / 2 - 1; j--) {
			if (stu[j].flag == 0 && stu[j].gender == !stu[i].gender) {
				printf("%s %s\n", stu[i].name, stu[j].name);
				stu[j].flag = 1;
				break;
			}
		}
	}
	
	return 0;
}
