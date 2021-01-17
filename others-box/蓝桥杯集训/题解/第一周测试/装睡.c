#include <stdio.h>

typedef struct People {
	char name[4];
	int a;//ºôÎü 
	int b;//Âö²« 
} People;

int main() {
	int n;
	People arr[11];
	
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++) {
		scanf("%s %d %d", &arr[i].name, &arr[i].a, &arr[i].b);
	}
	
	for (i = 0; i < n; i++) {
		if ((arr[i].a < 15 || arr[i].a > 20) || 
			(arr[i].b < 50 || arr[i].b > 70)) {
			printf("%s\n", arr[i].name);
		}
	}
	
	return 0;
}
