#include <iostream>
using namespace std;

int main() {
	int a, max = 0, idx = -1;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		if(a > max) {
			max = a;
			idx = i;
		}
	}
	
	cout << max << "\n" << idx + 1;
	
	return 0;
}