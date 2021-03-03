#include <iostream>

using namespace std;

int main() { 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				for (int m = 0; m < 2; m++) {
					for (int n = 0; n < 2; n++) {
						cout << i << j << k << m << n << endl;
					}
				}
			}
		}
	}
	
	return 0;
}
