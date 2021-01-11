#include <stdio.h>

int main() {
	int x, y, z, max_num;
	
	scanf("%d %d %d", &x, &y, &z);
	
	max_num = x;
	if (y > max_num) max_num = y;
	if (z > max_num) max_num = z;
	
	printf("%d", max_num);
	
	return 0;
}
