#include <iostream>
using namespace std;

long long int p[101] = {0, 1, 1, 1};

int main() {
	for(int i = 4; i <= 100; i++) {
		p[i] = p[i - 2] + p[i - 3];
	}
	
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n;
		cout << p[n] << "\n";
	}
	
	return 0;
}
