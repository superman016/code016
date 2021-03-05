#include <iostream>
#include <algorithm>

using namespace std;

string ToString(int num) {
	string str, res;
	
	while (num > 0) {
		str += (num%10) + '0';
		num /= 10;
	}
	for (int i = str.size() - 1; i >=0; i--) {
		res += str[i];
	}
	
	return res;
}

bool IsWant(string str) {
	bool isWant = false;
	
	if (str.find('2') != str.npos || str.find('0') != str.npos || 
		str.find('1') != str.npos || str.find('9') != str.npos) {
		isWant = true;		
	}
	
	return isWant;
}

int main() {
	int n, sum = 0;
	
	cin >> n;
	
	for (int i = 0; i <= n; i++) {
		if (IsWant(ToString(i))) {
			sum += i;
		}
	}
	
	cout << sum;
	
	return 0;
}
