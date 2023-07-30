#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, dp[501][501];
	cin >> n;
	
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= n; j++) {
			dp[i][j] = 0;
		}
	}
	
	int result = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cin >> dp[i][j];
			dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
			result = max(dp[i][j], result);
		}
	}
	
	cout << result;
	
	return 0;
}
