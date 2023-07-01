#include <iostream>
using namespace std;

int gcd(long long int a, long long int b) {
	if(a < b) {
		long long int tmp = a;
		a = b;
		b = tmp;
	}
	
	long long int r = a % b;
	if(r == 0)
		return b;
	else
		return gcd(b, r);
	
}

int main() {
	long long int a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b);
	
	return 0;
}
