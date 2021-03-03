#include <iostream>

using namespace std;

int main() {
	char table[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
	                  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	char res[100];
	int num, length = 0;
	
	cin >> num;
	
	while (num > 0) {
		int in = num % 16;
		num /= 16;
		res[length++] = table[in];
	}
	if (length == 0) {
		length = 1;
		res[0] = '0';	
	}
	
	for (int i = length - 1; i >= 0; i--) {
		cout << res[i];
	}
	
	return 0;
}
