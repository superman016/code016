#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Data {
	char id[19];
	char birth[9];
} Data;

int cmp(const void* x, const void* y) {
	Data data_1 = *(Data*)x;
	Data data_2 = *(Data*)y;
	
	int res = strcmp(data_2.birth, data_1.birth);
	if (res != 0) {
		return res;
	} else {
		return strcmp(data_2.id, data_1.id);
	}
}

void SetBirth(Data* d) {
	int i, j = 0;
	for (i = 6; i < 14; i++) {
		d->birth[j] = d->id[i];
		j++;
	}
	d->birth[8] = '\0';
}

int main() {
	int n, i;
	
	scanf("%d", &n);
	
	Data id_arr[n];
	
	for (i = 0; i < n; i++) {	
		scanf("%s", &id_arr[i].id);
		SetBirth(&id_arr[i]);
	}
	
	qsort(id_arr, n, sizeof(Data), cmp);
	
	for (i = 0; i < n; i++) {
		printf("%s\n", id_arr[i].id);
	}
	
	return 0;
}
