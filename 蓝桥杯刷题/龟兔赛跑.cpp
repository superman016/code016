#include <iostream>

using namespace std;

int main() {
	int time;
	int a = 0, b = 0, count = 0;
	bool is_run = true;
	
	cin >> time;
	
	for (int i = 1; i < time + 1; i++) {
		a += 3;
		
		if (is_run) {
			if (i % 10 == 0) {
				if (b > a) {
					is_run = false;
					count = 1;
				} else {
					b += 9;
				}
			} else {
				b += 9;
			}
		} else {
			count++;
			if (count % 30 == 0) {
				is_run = true;
			}
		}
	}
	
	if (a > b) {
		cout << "@_@ ";
	} else if (a < b) {
		cout << "^_^ ";
	} else {
		cout << "-_- ";
	}
	cout << max(a, b);
	
	return 0;
}
