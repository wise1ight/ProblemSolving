#include <iostream>

using namespace std;

int main() {
	int max = 0, r = 0, c = 0, arr[9][9];
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if(arr[i][j] > max) {
				max = arr[i][j];
				r = i;
				c = j;
			}
		}
	}
	
	cout << max << "\n" << r + 1 << " " << c + 1;
	
	return 0;
}
