#include <iostream>
using namespace std;

char arr[65][65];

void recursive(int x, int y, int size) {
	if(size == 1) {
		cout << arr[x][y];
	} else {
		bool flag = false;
		char base = arr[x][y];
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
		
		if(!flag)
			cout << base;
		else {
			cout << "(";
			recursive(x, y, size / 2);
			recursive(x, y + size / 2, size / 2);
			recursive(x + size / 2, y, size / 2);
			recursive(x + size / 2, y + size / 2, size / 2);
			cout << ")";
		}
	}
}

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	recursive(0, 0, n);
	
	return 0;
}
