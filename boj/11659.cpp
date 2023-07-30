#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n, m, accumulate[100001] = { 0 };
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> accumulate[i];
		accumulate[i] += accumulate[i - 1];
	}
	
	int i, j;
	for(int k = 0; k < m; k++) {
		cin >> i >> j;
		cout << accumulate[j] - accumulate[i - 1] << "\n";
	}
	return 0;
}
