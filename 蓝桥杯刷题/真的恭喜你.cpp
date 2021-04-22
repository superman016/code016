#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int score;
	
	cin >> score;
	
	if (score >= 90) {
		printf("gong xi ni kao le %d fen!", score);
	} else {
		printf("kao le %d fen bie xie qi!", score);
	}
	
	return 0;
}
