#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, amounts[10001], dp[10001][3];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> amounts[i];
	
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[0][2] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
		dp[i][1] = dp[i - 1][0] + amounts[i];
		dp[i][2] = dp[i - 1][1] + amounts[i];
	}
	
	cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
	
	return 0;
}
