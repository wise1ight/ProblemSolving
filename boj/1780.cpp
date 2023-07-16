#include <iostream>
using namespace std;

int result[3] = {0, 0, 0};
int arr[2187][2187];

void recursive(int x, int y, int size) {
	if(size == 1) {
		result[arr[x][y] + 1]++;
	} else {
		bool flag = false;
		int base = arr[x][y];
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				if(base != arr[x + i][y + j]) {
					flag = true;
					break;
				}
			}
			
			if(flag)
				break;
		}
		
		if(!flag) {
			result[base + 1]++;
		} else {
			recursive(x,				y, size / 3);
			recursive(x + size / 3,		y, size / 3);
			recursive(x + 2 * size / 3,	y, size / 3);
			
			recursive(x,				y + size / 3, size / 3);
			recursive(x + size / 3,		y + size / 3, size / 3);
			recursive(x + 2 * size / 3,	y + size / 3, size / 3);
			
			recursive(x,				y + 2 * size / 3, size / 3);
			recursive(x + size / 3,		y + 2 * size / 3, size / 3);
			recursive(x + 2 * size / 3,	y + 2 * size / 3, size / 3);
		}
	}
}

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	
	recursive(0, 0, n);
	
	for(int i = 0; i < 3; i++)
		cout << result[i] << "\n";
	
	return 0;
}
