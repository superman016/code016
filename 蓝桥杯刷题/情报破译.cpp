#include <iostream>

using namespace std;

int main() {
	string str;

	getline(cin, str);
	
	bool is_find = false;
	char first;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			first = str[i];
			is_find = true;
			break;
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			is_find = true;
			first = str[i];
			break;
		} else {
			continue;
		}
	}
	
	if (!is_find) {
		cout << str;
		return 0;
	} 
	
	int x = 0;
	
	if (first >= '0' && first <= '9') {
		x = first - '0';
	} else if (first >= 'A' && first <= 'Z') {
		x = first - 64;
	}
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (str[i] + x > '9') {
				str[i] = '0' - 1 + ((str[i] + x) % '9') % 10;
			} else {
				str[i] = str[i] + x;
			}
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			if (str[i] + x > 'Z') {
				str[i] = 'A' - 1 + ((str[i] + x) % 'Z') % 27;
			} else {
				str[i] = str[i] + x;
			}
		} else {
			continue;
		}
	}
	
	cout << str;
	
	return 0;
}
