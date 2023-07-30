#include <iostream>
using namespace std;

int dp[1000001] = {0, 1, 2};

int main() {
	int n;
	cin >> n;
	for(int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}
	
	cout << dp[n];
	
	return 0;
}
