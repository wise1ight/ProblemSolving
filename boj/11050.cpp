#include <iostream>
using namespace std;

int factorial(int n) {
	int result = 1;
	for(int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n, k;
	cin >> n >> k;
	
	cout << factorial(n) / (factorial(k) * factorial(n - k));
	
	return 0;
}
