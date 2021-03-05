#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ll f1 = 1, f2 = 1, f3 = 1, now;
	ll num;
	
	for (ll i = 3; i < 20190324; i++) {
		now = f1 + f2 + f3;
		f1 = f2;
		f2 = f3;
		f3 = now;
	}
	
	cout << now;
	
	return 0;
}
