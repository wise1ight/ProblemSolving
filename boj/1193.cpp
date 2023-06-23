#include <iostream>
using namespace std;

int main() {
	int x, count = 1;
	cin >> x;
	
	while(x > count) {
		x -= count;
		count++;
	}
	
	if (count % 2 == 0)
		cout << x << "/" << count - x + 1;
	else
		cout << count - x + 1 << "/" << x;
	
	return 0;
}
