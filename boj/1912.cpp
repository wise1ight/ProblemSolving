#include <iostream>
#include <cmath>
using namespace std;

int arr[100001], dp[100001] = { 0 };

int main() {
	int n, num;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	int result = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		if(i == 1)
			result = dp[i];
		else
			result = max(dp[i], result);
	}
	
	cout << result;
	
	return 0;
}
