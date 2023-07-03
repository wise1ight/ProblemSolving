#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	bool isPrime[1000001] = {false, false};
	for(int i = 2; i <= 1000000; i++) {
		isPrime[i] = true;
	}
	
	for(int i = 2; i <= 1000000; i++) {
		for(int j = 2; i * j <= 1000000; j++)
			isPrime[i * j] = false;
	}
	
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int count = 0;
		cin >> n;
		for(int left = 2; left <= n / 2; left++) {
			int right = n - left;
			if(isPrime[left] && isPrime[right])
				count++;
		}
		cout << count << "\n";
	}
	
	return 0;
}
