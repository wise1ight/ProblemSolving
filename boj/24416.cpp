#include <iostream>
using namespace std;

int countRecursive = 0;
int countDP = 0;
int f[41] = {};

int fib(int n) {
	if(n == 1 || n == 2) {
		countRecursive++;
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}

int fibonacci(int n) {
	f[1] = f[2] = 1;
	for(int i = 3; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		countDP++;
	}
	return f[n];
}

int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << countRecursive << "\n" << countDP;
	return 0;
}
