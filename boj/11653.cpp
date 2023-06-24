#include <iostream>
using namespace std;

int main() {
	int n, num = 2;
	cin >> n;
	while(true) {
		if(n == 1)
			break;
			
		if(n % num == 0) {
			cout << num << "\n";
			n /= num;
		} else {
			num++;
		}
	}
	
	return 0;
}