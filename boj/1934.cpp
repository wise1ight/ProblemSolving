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
	int t, a, b;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a * b / gcd(a, b) << "\n";
	}
	
	return 0;
}
