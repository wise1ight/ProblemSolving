#include <iostream>
using namespace std;

int main() {
	int n, m, i, j, arr[101] = { 0 };
	cin >> n >> m;
	for(int a = 1; a <= n; a++)
		arr[a] = a;
	
	for(int a = 0; a < m; a++) {
		cin >> i >> j;
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	
	for(int a = 1; a <= n; a++)
		cout << arr[a] << " ";
	
	return 0;
}