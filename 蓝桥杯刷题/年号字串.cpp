#include <iostream>

using namespace std;

int main() {
	int year;
	char res[100];
	int length = 0;
	
	cin >> year;
	
	while (year > 0) {
		char ch = year % 26 + 64;
		if (ch == 64) {
			ch += 26;
			year -= 1;
		}
		res[length++] = ch;
		year /= 26;
	}

	for (int i = length - 1; i >= 0; i--) {
		cout << res[i];
	}
	
	return 0;
}
