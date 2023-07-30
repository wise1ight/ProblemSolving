#include <iostream>
using namespace std;

int main() {
	int n, tmp, count = 0;
	cin >> n;
	tmp = n;
	
	while(true) {
		tmp = (tmp / 10 + tmp % 10) % 10 + (tmp % 10) * 10;
		count++;
		if(n == tmp)
			break;
	}
	
	cout << count;
	
	return 0;
}
