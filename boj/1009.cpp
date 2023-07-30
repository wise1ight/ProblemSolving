#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> a >> b;
		
		int result = 1;
		for(int j = 0; j < b; j++) {
			result *= a;
			result %= 10;
		}
		
		if(result == 0)
			cout << 10 << "\n";
		else
			cout << result << "\n";
	}
	return 0;
}
