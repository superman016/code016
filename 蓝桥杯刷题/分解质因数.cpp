#include <iostream>

using namespace std;

void Isolate(int num) {
	int is_first = 1;
	cout << num << "=";
	for (int i = 2; num != 1; i++) {
		while (num % i == 0) {
			if (is_first) {
				cout << i;
				is_first = 0;
			} else {
				cout << "*" << i;
			}
			num /= i;
		}
		cout << (num == 1 ? "\n" : "");
	}
}

int main() {
	int a, b;
	
	cin >> a >> b;
	
	for (int i = a; i <= b; i++) {
		Isolate(i);
	}
	
	return 0;
}
