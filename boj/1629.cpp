#include <iostream>
using namespace std;

long long A, B, C;

long long recursive(long long b) {
	if (b == 0) return 1;
	long long num = recursive(b / 2);
	num = num * num % C;
	if (b % 2 == 0) return num;
	return num * A % C;
}

int main() {
	cin >> A >> B >> C;
	cout << recursive(B);
	
	return 0;
}
