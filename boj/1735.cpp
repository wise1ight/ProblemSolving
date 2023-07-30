#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	int r = a % b;
	if(r == 0)
		return b;
	else
		return gcd(b, r);
	
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = a * d + c * b, B = b * d;
	int g = gcd(A, B);
	cout << A / g << " " << B / g;
	
	return 0;
}
