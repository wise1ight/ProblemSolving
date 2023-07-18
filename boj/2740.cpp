#include <iostream>
using namespace std;

int main() {
	int a[101][101], b[101][101], n, m, k;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	
	cin >> m >> k;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < k; j++)
			cin >> b[i][j];
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < k; j++) {
			int sum = 0;
			for(int x = 0; x < m; x++) {
				sum += a[i][x] * b[x][j];
			}
			cout << sum << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
