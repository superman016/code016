#include <iostream>
#include <cmath>

using namespace std;

bool is_can(int x, int y, int z) {
	if (pow(x, 2) + pow(y, 2) + pow(z, 2) == 3 * x * y * z) {
		return true;
	}
	
	return false;
}

int main() {
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		if (is_can(x, y, z)) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	
	return 0;
}
