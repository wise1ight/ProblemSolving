#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, x, y, xmin = 10000, xmax = -10000, ymin = 10000, ymax = -10000;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		xmin = min(x, xmin);
		xmax = max(x, xmax);
		ymin = min(y, ymin);
		ymax = max(y, ymax);
	}
	cout << (xmax - xmin) * (ymax - ymin);
	
	return 0;
}