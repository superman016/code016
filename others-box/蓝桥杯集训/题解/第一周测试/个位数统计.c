#include <stdio.h>
#include <string.h>

int main() {
	int arr[10];
	char str[1000];
	
	int i;
	for (i = 0; i < 10; i++) {
		arr[i] = 0;
	}
	
	scanf("%s", &str);
	
	for (i = 0; i < strlen(str); i++) {
		int in = str[i] - '0';
		arr[in]++;
	}
	
	for (i = 0; i < 10; i++) {
		if (arr[i] != 0) {
			printf("%d:%d\n", i, arr[i]);
		}
	}
	
	return 0;
}
