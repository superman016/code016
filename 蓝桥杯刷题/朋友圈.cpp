#include <iostream>
using namespace std;

int father[1024];
int size[1024];

void init(int n) {
	for (int i = 0; i < n; i++) {
		father[i] = i;
	}
	for (int i = 0; i < n; i++) {
		size[i] = 1;
	}
}
int find(int son) {
	if (father[son] != son) {
		father[son] = find(father[son]);
	}
	return father[son];
}
void union_set(int a, int b) {
	int x = find(a), y = find(b);
	if (x == y) {
		return ;
	} 
	if (size[x] > size[y]) {
		swap(x, y);
	}
	father[x] = y;
	size[y] += size[x];
}
int main() {
	int N, M;
	cin >> N >> M;
	init(N);
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		int arr[num];
		int length = 0;
		for (int i = 0; i < num; i++) {
			cin >> arr[length++];
		}
		for (int j = 0; j < length; j++) {
			for (int k = j + 1; k < length; k++) {
				union_set(father[arr[j]], father[arr[k]]);
			}
		}
	}
	int max_num = 0;
	for (int i = 0; i < N; i++) {
		if (size[i] > max_num) {
			max_num = size[i];
		}
	}
	cout << max_num;
	return 0;
}
