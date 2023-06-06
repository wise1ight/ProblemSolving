#include <iostream>
using namespace std;

int main() {
	int n, m, i, j, k, arr[101] = {0};
	cin >> n >> m;
	
	for(int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		
		for(int b = i; b <= j; b++)
			arr[b] = k;
	}
	
	for(int a = 1; a <= n; a++)
		cout << arr[a] << " ";
	
	return 0;
}