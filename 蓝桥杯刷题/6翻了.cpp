#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str; 
	
	getline(cin, str);
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '6') {
			int count = 1;
			int j = i + 1;
			
			while (str[j] == '6' && i + count < str.size()) {
				count++;
				j++;
			}
			if (count > 3 && count <= 9) {
				str.replace(i, count, "9");
			} else if (count > 9) {
				str.replace(i, count, "27");
			}
		}
	}
	
	cout << str;
		
	return 0;
}
