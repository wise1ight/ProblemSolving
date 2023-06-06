#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	b += c;
	a += b / 60;
	b %= 60;
	a %= 24;
	
	cout << a << " " << b;
	
	return 0;
}