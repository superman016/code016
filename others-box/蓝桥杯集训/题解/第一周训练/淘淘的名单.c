#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* ch_1 = "KXZSMR";
	char* ch_2 = "CHAIQIANG";
	char* ch_3 = "DRAGONNET";
	char* ch_4 = "STUDYFATHER";
	char* ch_5 = "STUDYFATHER";
	char* ch_6 = "DENOMINATOR";
	int n, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		char temp_ch[5];
		scanf("%s", &temp_ch);
		
		if (strcmp(temp_ch, "WYS") == 0) {
			printf("%s\n", ch_1);
		} else if (strcmp(temp_ch, "CQ") == 0) {
			printf("%s\n", ch_2);
		} else if (strcmp(temp_ch, "LC") == 0) {
			printf("%s\n", ch_3);
		} else if (strcmp(temp_ch, "SYT") == 0 || strcmp(temp_ch, "SSD") == 0 || 
				   strcmp(temp_ch, "LSS") == 0 || strcmp(temp_ch, "LYF") == 0) {
			printf("%s\n", ch_4);
		} else {
			printf("%s\n", ch_6);
		}
	}
	
	return 0;
}
