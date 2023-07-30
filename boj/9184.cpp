#include <iostream>
using namespace std;

int dp[21][21][21] = {};

void print(int a, int b, int c, int value) {
	cout << "w(" << a << ", " << b << ", " << c << ") = " << value << "\n";
}

int main() {
	for(int i = 0; i < 21; i++) {
		for(int j = 0; j < 21; j++) {
			for(int k = 0; k < 21; k++) {
				if(i == 0 || j == 0 || k == 0)
					dp[i][j][k] = 1;
				else if(i < j && j < k)
					dp[i][j][k] = dp[i][j][k - 1] + dp[i][j - 1][k - 1] - dp[i][j - 1][k];
				else
					dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k] + dp[i - 1][j][k - 1] - dp[i - 1][j - 1][k - 1];
			}
		}
	}
		
			
	int a, b, c;
	while(true) {
		cin >> a >> b >> c;
		if(a == -1 && b == -1 && c == -1) {
			break;
		}
		
		if(a <= 0 || b <= 0 || c <= 0)
			print(a, b, c, dp[0][0][0]);
		else if(a > 20 || b > 20 || c > 20)
			print(a, b, c, dp[20][20][20]);
		else
			print(a, b, c, dp[a][b][c]);
	}
	return 0;
}
