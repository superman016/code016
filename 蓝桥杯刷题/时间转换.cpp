#include <iostream>

using namespace std;

int main() {
	int time;

	cin >> time;

	if (time != 0) {
		int hour = time / 3600;
		int minute = (time - (hour*3600)) / 60;
		int second = time - (hour*3600) - (minute*60);
		cout << hour << ":" << minute << ":" << second;
	} else {
		cout << "0:0:0";
	}

	return 0;
}
