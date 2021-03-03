#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string num;
	long long res = 0;
	
	cin >> num;
	
	int n = num.size();
	for (int i = n - 1; i >= 0; i--) {
		if (num[i] >= 'A' && num[i] <= 'F') {
			res += (num[i] - 55) * pow(16, n - 1 - i);
		} else {
			res += (num[i] - '0') * pow(16, n - 1 - i);
		}
	}
	
	cout << res;
	
	return 0;
}
