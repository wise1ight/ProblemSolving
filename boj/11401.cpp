#include <iostream>
#define MOD 1000000007
using namespace std;

long long int pow(long long int x, long long int e) {
	long long int result = 1;
	
	while(e > 0) {
		if(e % 2)
			result = (result * x) % MOD;
			
		x = (x * x) % MOD;
		e /= 2;
	}
	
	return result;
}

int main() {
	int n, k;
	long long int numerator = 1, denominator = 1;
	cin >> n >> k;
	
	for(int i = n; i >= n - k + 1; i--)
		numerator = (numerator * i) % MOD;
		
	for(int i = k; i >= 1; i--)
		denominator = (denominator * i) % MOD;
	
	cout << (numerator * pow(denominator, MOD - 2)) % MOD;
	
	
	return 0;
}
