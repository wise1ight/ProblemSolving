#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m = 10000000;
	cin >> n;
	for(int i = 0; 3 * i <= 5000; i++) {
		for(int j = 0; 5 * j <= 5000; j++) {
			if(3 * i + 5 * j == n)
				m = min(m, i + j);
		}
	}
	
	if(m == 10000000)
		cout << -1;
	else
		cout << m;
	
	return 0;
}
