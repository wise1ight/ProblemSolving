#include <iostream>
using namespace std;

int main() {
	int n, cycle = 0, number = 1;
	cin >> n;
	
	while(true) {
		number += 6 * cycle++;
		if(number >= n)
			break;
	}
	
	cout << cycle;
	return 0;
}
