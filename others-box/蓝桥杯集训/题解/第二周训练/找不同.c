#include <stdio.h>
#include <string.h>

int main() {
	int table[26];
	char str_1[100];
	char str_2[100];
	
	scanf("%s %s", &str_1, & str_2);
	
	int i;
	for (i = 0; i < 26; i++) {
		table[i] = 0;
	}
	
	for (i = 0; i < strlen(str_1); i++) {
		int in = str_1[i] - 97;
		table[in] += 1;
	}
	for (i = 0; i < strlen(str_2); i++) {
		int in = str_2[i] - 97;
		table[in] -= 1;
		if (table[in] < 0) {
			printf("%c", str_2[i]);
			break;
		}
	}
	
	return 0;
}
