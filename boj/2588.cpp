#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;
	c = a * b;
	
	for(int i = 0; i < 3; i++) {
		cout << a * (b % 10) << "\n";
		b /= 10;
	}
	cout << c;
	
	return 0;
}