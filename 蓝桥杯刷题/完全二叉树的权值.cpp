#include <iostream>

using namespace std;

int main() {
	int arr[100005];
	int n, length = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[length++];
	}
	
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
