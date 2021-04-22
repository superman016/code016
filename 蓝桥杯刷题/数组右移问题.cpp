#include <iostream>
#include <algorithm>

using namespace std;

int arr[105];
int length = 0;

int main() {
	int N, M;
	
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[length++];
	}
	
	reverse(arr, arr + length - M);
	reverse(arr + length - M, arr + length);
	reverse(arr, arr + length);
	
	bool is_first = true;
	for (int i = 0; i < length; i++) {
		if (is_first) {
			cout << arr[i];
			is_first = false;
		} else {
			cout << " " << arr[i];
		}
	}
	
	return 0;
}
