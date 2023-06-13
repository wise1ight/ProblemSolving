#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, point = 2;
	cin >> n;
	for(int i = 0; i < n; i++) {
		point *= 2;
		point -= 1;
	}
	cout << (int)pow(point, 2);
	return 0;
}
