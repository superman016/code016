#include <iostream>
#include <stdlib.h>

using namespace std;

string g_ch[13] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
string g_zh[5] = {"shi", "bai", "qian", "wan", "yi"};

int main() {
	string num_str;

	getline(cin, num_str);
	
	for (int i = 0; i < num_str.size(); i++) {
		int in = num_str[i] - 48;
		cout << g_ch[in] << " ";
	}
	

	return 0;
}
