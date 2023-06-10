#include <iostream>
using namespace std;

int main() {
	int n, x, y, arr[100][100] = {0}, area = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		for(int j = x; j < x + 10; j++)
			for(int k = y; k < y + 10; k++)
				arr[j][k] = 1;
	}
	
	for(int i = 0; i < 100; i++)
		for(int j = 0; j < 100; j++)
			area += arr[i][j];
			
	cout << area;
	
	return 0;
}
