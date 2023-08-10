#include <iostream>
using namespace std;

int main() {
	int n, num, count = 0;
	cin >> n;
	for(int i = 0; i < 5; i++) {
		cin >> num;
		if(n == num) count++;
	}
	
	cout << count;
	return 0;
}
