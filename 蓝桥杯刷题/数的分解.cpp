#include <iostream>

using namespace std;

bool IsWant(int num) {
	bool isWant = true;
	
	while (num > 0 && isWant == true) {
		int unit = num % 10;
		if (unit == 2 || unit == 4) {
			isWant = false;
		}
		num /= 10;
	}
	
	return isWant;
} 

int main() {
	int sum = 0;
	
	for (int i = 1; i < 2019; i++) {
		for (int j = i + 1; j < 2019; j++) {
			for (int k = j + 1; k < 2019; k++) {
				if (i + j + k == 2019 && IsWant(i) && IsWant(j) && IsWant(k)) {
					sum++;
				}
			}
		}
	}
	
	cout << sum;
	
	return 0;
}
