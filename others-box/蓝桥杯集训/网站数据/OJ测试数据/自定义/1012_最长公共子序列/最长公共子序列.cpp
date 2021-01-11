#include <bits/stdc++.h>

using namespace std;

int LCS(string str1, string str2) {
	int row = str1.size() + 1;
	int column = str2.size() + 1;
	
	int dp[row][column];
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			dp[i][j] = 0;
		}
	}
	
	for (int i = 1; i < row; i++) {
		for (int j = 1; j < column; j++) {
			if (str1[i - 1] == str2[j - 1]) 
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	
	return dp[row - 1][column - 1];
}

int main() {
	cout << LCS("abcd", "aed");
	
	return 0;
}
