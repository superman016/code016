#include <iostream>

using namespace std;

int main() {
	int n, max_n = -10001, min_n = 10001, sum = 0; 
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ele;
		cin >> ele;
		if (ele > max_n) {
			max_n = ele;
		}
		if (ele < min_n) {
			min_n = ele;
		}
		sum += ele;
	}
	
	cout << max_n << endl;
	cout << min_n << endl;
	cout << sum << endl;
	
	return 0;
}
