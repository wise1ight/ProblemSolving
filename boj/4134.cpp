#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
	for(long long int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	long long int t, n;
	cin >> t;
	for(long long int i = 0; i < t; i++) {
		cin >> n;
		if(n <= 2)
			cout << 2 << "\n";
		else if(n == 3)
			cout << 3 << "\n";
		else {
			while(!isPrime(n)) {
				n++;
			}
			cout << n << "\n";
		}
	}
	return 0;
}
