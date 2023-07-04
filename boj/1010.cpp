#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n >> m;
		
		long long int result = 1;
		for(long long int i = m; i > max(n, m - n); i--) {
			result *= i;
		}
		
		for(long long int i = min(n, m - n); i >= 1; i--) {
			result /= i;
		}
		
		cout << result << "\n";
	}
	
	return 0;
}
