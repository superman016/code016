#include <iostream>

using namespace std;

string Convert(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32; 
		}
	}
	
	return str;
}

int main() {
	string a, b;
	int res;
	
	cin >> a >> b;
	
	if (a.size() != b.size()) {
		res = 1;
	} else if (a == b) {
		res = 2;
	} else if (a.size() == b.size() && Convert(a) == Convert(b)) {
	    res = 3;
	} else if (a.size() == b.size() && Convert(a) != Convert(b)) {
		res = 4;
	}
	
	cout << res;

	return 0;
}
