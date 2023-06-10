#include <iostream>
using namespace std;

int main() {
	int b, a = 1, result = 0;
	string n;
	cin >> n >> b;
	
	for(int i = n.length() - 1; i >= 0; i--) {
		if('0' <= n.at(i) && n.at(i) <= '9')
			result += (n.at(i) - '0') * a;
		else
			result += (n.at(i) - 'A' + 10) * a;
		a *= b;
	}
	
	cout << result;
	
	return 0;
}
