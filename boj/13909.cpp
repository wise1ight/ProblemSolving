#include <iostream>
using namespace std;

int main() {
	int n, count = 0, i = 1, m = 2;
	cin >> n;
	
	while(i <= n) {
		count++;
		i += 1 + m;
		m += 2;
	}
	
	cout << count;
	
	return 0;
}
