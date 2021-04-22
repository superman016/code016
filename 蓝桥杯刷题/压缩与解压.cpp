#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

string to_str(int num) {
	string str;
	
	while (num > 0) {
		str += (num % 10) + '0';
		num /= 10;
	}
	
	reverse(str.begin(), str.end());
	
	return str;
}

string gzip(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (i + 1 < str.size() && str[i] == str[i + 1]) {
			int count = 1;
			int j = i + 1;
			while (str[j] == str[i] && j < str.size()) {
				j++;
				count++;
			}
			string res = to_str(count) + str[i];
			str.replace(i, count, res);
		}
	}
	
	return str;
} 

string zip(string str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			string ch;
			int j = i;
			while (str[j] >= '0' && str[j] <= '9' && j < str.size()) {
				ch += str[j];
				j++;
			}
			int count = atoi(ch.c_str());
			string res;
			for (int k = 0; k < count; k++) {
				res += str[i + ch.size()];
			}
			str.replace(i, ch.size() + 1, res);
		}
	}
	
	return str;
}

int main() {
	char key;
	string str;
	
	cin >> key;
	cin.ignore();
	getline(cin, str);
	
	if (key == 'Y') {
		cout << gzip(str) << "\n";
	} else if (key == 'N') {
		cout << zip(str) << "\n";
	}
	
	return 0;
}
