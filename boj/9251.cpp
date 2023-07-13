#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int dp[1001][1001], result = 0;
	dp[0][0] = 0;
	string a, b;
	cin >> a >> b;
	
	int aLength = a.length();
	int bLength = b.length();
	
	for(int i = 0; i <= aLength; i++) {
		dp[i][0] = 0;
	}
	for(int j = 0; j <= bLength; j++) {
		dp[0][j] = 0;
	}
	
	for(int i = 1; i <= aLength; i++) {
		for(int j = 1; j <= bLength; j++) {
			if(a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			result = max(result, dp[i][j]);
		}
	}
	
	cout << result;
	
	return 0;
}
