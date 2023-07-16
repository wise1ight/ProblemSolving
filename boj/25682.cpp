#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char symbol[2] = {'W', 'B'};
	char board[2001][2001];
	int n, m, k, cnt[2001][2001][2], result = 2000 * 2000;
	cin >> n >> m >> k;
	
	for(int i = 0; i < n; i++)
		cin >> board[i];
		
	cnt[0][0][0] = 0;
	cnt[0][0][1] = 0;
	cnt[1][0][0] = 0;
	cnt[1][0][1] = 0;
	cnt[0][1][0] = 0;
	cnt[0][1][1] = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cnt[i + 1][j + 1][0] = cnt[i + 1][j][0] + cnt[i][j + 1][0] - cnt[i][j][0];
			cnt[i + 1][j + 1][1] = cnt[i + 1][j][1] + cnt[i][j + 1][1] - cnt[i][j][1];
			
			if(board[i][j] != symbol[(i + j) % 2])
				cnt[i + 1][j + 1][0]++;
			
			if(board[i][j] != symbol[(i + j + 1) % 2])
				cnt[i + 1][j + 1][1]++;
		}
	}
	
	for(int i = 0; i <= n - k; i++) {
		for(int j = 0; j <= m - k; j++) {
			result = min(result, cnt[i + k][j + k][0] - (cnt[i][j + k][0] + cnt[i + k][j][0]) + cnt[i][j][0]);
			result = min(result, cnt[i + k][j + k][1] - (cnt[i][j + k][1] + cnt[i + k][j][1]) + cnt[i][j][1]);
		}
	}
	
	cout << result;
	
	return 0;
}
