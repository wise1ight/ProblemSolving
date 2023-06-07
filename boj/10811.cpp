#include <iostream>
using namespace std;

int main() {
	int n, m, a, b, basket[101] = { 0 };
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) basket[i] = i;
	
	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		for(int j = 0; j < (b - a) / 2 + 1; j++) {
			int tmp = basket[a + j];
			basket[a + j] = basket[b - j];
			basket[b - j] = tmp;
		}
	}
	
	for(int i = 1; i <= n; i++) cout << basket[i] << " ";
	
	return 0;
}
