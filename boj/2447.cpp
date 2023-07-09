#include <iostream>
using namespace std;

char board[3000][3000];

void recursive(int t, int b, int l, int r) {
	int width = r - l + 1;
	int height = b - t + 1;
	
	if(width == 1 || height == 1)
		return;
	
	for(int i = t + height / 3; i <= b - height / 3; i++) {
		for(int j = l + width / 3; j <= r - width / 3; j++)
			board[i][j] = ' ';
	}
	
	recursive(t, t + height / 3 - 1, l, l + width / 3 - 1);
	recursive(t, t + height / 3 - 1, l + width / 3, r - width / 3);
	recursive(t, t + height / 3 - 1, r - width / 3 + 1, r);
	
	recursive(t + height / 3, b - height / 3, l, l + width / 3 - 1);
	recursive(t + height / 3, b - height / 3, r - width / 3 + 1, r);
	
	recursive(b - height / 3 + 1, b, l, l + width / 3 - 1);
	recursive(b - height / 3 + 1, b, l + width / 3, r - width / 3);
	recursive(b - height / 3 + 1, b, r - width / 3 + 1, r);
}

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			board[i][j] = '*';
	}
	
	recursive(0, n - 1, 0, n - 1);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			cout << board[i][j];
		cout << "\n";
	}
	
	return 0;
}
