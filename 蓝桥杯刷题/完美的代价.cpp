#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	char str[8005];
	int length;

	cin >> length;

	for (int i = 0; i < length; i++) {
		cin >> str[i];
	}

	int sum = 0;
	int odd = 0;
	for (int i = 0; i < length/2; i++) {
		int rear = length-1-i;
		if (str[i] != str[rear]) {
			int j = rear;
			while (j > i) {
				if (str[j] == str[i]) {
					for (int k = j; k < rear; k++) {
						swap(str[k], str[k+1]);
						sum++;
					}
					break;
				}
				j--;
			}
			if (j == i) {
				for (int k = i; k < rear; k++) {
					swap(str[k], str[k+1]);
				}
				i--;
				odd++;
				if (odd > 1) {
					cout << "Impossible";
					return 0;
				}
			}
		}
	}

	cout << sum;

	return 0;
}
