#include <iostream>

using namespace std;

int get_sum(int num) {
	int sum = 0;
	while (num > 0) {
		sum += (num % 10);
		num /= 10; 
	}
	
	return sum;
}

int main() {
	int n;

	cin >> n;
	
	while (n--) {
		int num;
		cin >> num;
		int heart = get_sum(num);
		bool is_heart = true;
		for (int i = 2; i < 10 && is_heart; i++) {
			if (get_sum(num * i) != heart) {
				is_heart = false;
			}
		}
		
		if (is_heart) {
			cout << heart << "\n";
		} else {
			cout << "NO\n";
		}
	}
	
	return 0;
}
