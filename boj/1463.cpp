#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, dp[1000001] = {0, 0, 1};
	cin >> n;
	
	for(int i = 3; i <= n; i ++) {
		if(i % 3 == 0) {
			dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
			if(i % 2 == 0)
				dp[i] = min(dp[i], min(dp[i / 2] + 1, dp[i - 1] + 1));
		} else if(i % 2 == 0) {
			dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
		} else
			dp[i] = dp[i - 1] + 1;
	}
	
	cout << dp[n];
	
	return 0;
}
