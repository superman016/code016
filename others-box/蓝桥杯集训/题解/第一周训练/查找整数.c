#include <stdio.h>

int main() {
	int n, num, i;
	int arr[1005];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	} 
	
	scanf("%d", &num);
	
	int is_find = 0;
	for (i = 0; i < n && !is_find; i++) {
		if (arr[i] == num) {
			is_find = 1;
		}
	}
	printf("%d", is_find ? i : -1);
	
	return 0;
}
