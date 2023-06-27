#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char board[51][51];
	int m, n, result = 10000;
	cin >> m >> n;
	
	for(int i = 0; i < m; i++)
		cin >> board[i];
	
	for(int i = 0; i <= m - 8; i++) {
		for(int j = 0; j <= n - 8; j++) {
			int wcount = 0, bcount = 0;
			
			for(int k = 0; k < 8; k++) {
				for(int l = 0; l < 8; l++) {
					if(((k + l) % 2 == 0 && board[i + k][j + l] != 'W')
					|| ((k + l) % 2 == 1 && board[i + k][j + l] != 'B')) {
						wcount++;
					}
					
					if(((k + l) % 2 == 0 && board[i + k][j + l] != 'B')
					|| ((k + l) % 2 == 1 && board[i + k][j + l] != 'W')) {
						bcount++;
					}
				}
			}
			
			result = min(min(wcount, bcount), result);
		}
	}
	
	cout << result;
	
	return 0;
}
