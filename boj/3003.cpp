#include <iostream>
using namespace std;

int main() {
	int tmp, arr[6] = {1, 1, 2, 2, 2, 8};
	
	for(int i = 0; i < 6; i++) {
		cin >> tmp;
		arr[i] -= tmp;
	}
	
	for(int i = 0; i < 6; i++) cout << arr[i] << " ";
	
	return 0;
}
