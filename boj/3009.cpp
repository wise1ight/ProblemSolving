#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, xs[1001] = {}, ys[1001] = {};
	for(int i = 0; i < 3; i++) {
		cin >> x >> y;
		xs[x]++;
		ys[y]++;
	}
	
	for(int i = 0; i <= 1000; i++) {
		if(xs[i] == 1)
			cout << i;
	}
	cout << " ";
	for(int i = 0; i <= 1000; i++) {
		if(ys[i] == 1)
			cout << i;
	}
	return 0;
}