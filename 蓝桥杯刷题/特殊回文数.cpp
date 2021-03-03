#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	for (int i = 10000; i < 100000; i++) {
		int a = i / 10000 % 10;
		int b = i / 1000 % 10;
		int c = i / 100 % 10;
		int d = i / 10 % 10;
		int e = i % 10;
		
		if (a == e && b == d && a + b + c + d + e == n) {
			cout << a << b << c << d << e << endl;
		}
	}
	for (int i = 100000; i < 1000000; i++) {
		int a = i / 100000 % 10;
		int b = i / 10000 % 10;
		int c = i / 1000 % 10;
		int d = i / 100 % 10;
		int e = i / 10 % 10;
		int f = i % 10;
		
		if (a == f && b == e && c == d && a + b + c + d + e + f == n) {
			cout << a << b << c << d << e << f << endl;
		}
	}
	
	return 0;
}
