#include <iostream>

using namespace std;

int main() {
	int n, k, count = 0;
	cin >> n >> k;
	
	for(int q = 1; q <= n; q++) {
		if(n % q == 0)
			count++;
			
		if(count == k) {
			cout << q;
			return 0;
		}
	}
	
	cout << 0;
		
	return 0;
}
