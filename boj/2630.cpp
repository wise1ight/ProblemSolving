#include <iostream>
using namespace std;

int N, board[128][128], cnt[2] = {0, 0};

void divide(int n, int x, int y) {
	if(n == 1) {
		cnt[board[y][x]]++;
	} else {
		bool diff = false;
		int check = board[y][x];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(board[y + i][x + j] != check) {
					diff = true;
					break;
				}
			}
			
			if(diff)
				break;
		}
		
		if(diff) {
			divide(n / 2, x, y);
			divide(n / 2, x + n/2, y);
			divide(n / 2, x, y + n/2);
			divide(n / 2, x + n/2, y + n/2);
		} else {
			cnt[board[y][x]]++;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			cin >> board[i][j];
	}
	
	divide(N, 0, 0);
	
	cout << cnt[0] << "\n" << cnt[1];
	
	return 0;
}