#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k= 0; k < 10; k++) {
				for (int n = 0; n < 10; n++) {
					if (i == n && j == k) {
						cout << i << j << k << n << endl;
					}
				}
			}
		}
	} 
	
	return 0;
}
