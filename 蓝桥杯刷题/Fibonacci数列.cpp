#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ll n, f1 = 1, f2 = 1, now; 
	
	cin >> n;
	
	for (ll i = 0; i < n - 2; i++) {
		now = (f1 + f2) % 10007;
		f1 = f2 % 10007;
		f2 = now % 10007;
	}
	
	cout << now;
	
	return 0;
}
