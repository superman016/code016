#include <iostream>
#include <set> 

using namespace std;

int main() {
	multiset<int> cap;
	
	int max, sum = 0;
	
	cin >> max;
	
	int ele;
	while (cin >> ele) {
		cap.insert(ele);
		if (cin.get() == '\n') {
			break;
		}
	}
	
	for (multiset<int>::iterator it = cap.begin(); it != cap.end(); it++) {
		if (sum + *it <= max) {
			sum += *it;
		} else {
			break;
		}
	}
	
	cout << sum;
	
	return 0;
}
