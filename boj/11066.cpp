#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int files[501];
int sizesum[501];
int dp[501][501];

void dfs(int start, int end) {
	if(start == end) {
		dp[start][end] = 0;
		return;
	}
	
	if(dp[start][end] != 0)
		return;
	
	dp[start][end] = 2147483647;
	for(int i = start; i < end; i++) {
		dfs(start, i);
		dfs(i + 1, end);
		dp[start][end] = min(dp[start][end], dp[start][i] + dp[i + 1][end]);
	}
	dp[start][end] += sizesum[end] - sizesum[start - 1];
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		memset(dp, 0, sizeof(dp));
		
		int k;
		cin >> k;
		for(int i = 1; i <= k; i++) {
			cin >> files[i];
			sizesum[i] = sizesum[i - 1] + files[i];
		}
		
		dfs(1, k);
		cout << dp[1][k] << "\n";
	}
	
	return 0;
}
