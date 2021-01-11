#include <bits/stdc++.h>

using namespace std;

void perm(string str, int start) {
	if (start == str.size() - 1) {
		cout << str << endl;
		return ;
	} else {
		for (int i = start; i < str.size(); i++) {
			swap(str[i], str[start]);
			perm(str, start + 1);
			swap(str[i], str[start]);
		}
	}
}



int main() {
	perm("123", 0);
	
	return 0;
}
