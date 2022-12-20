#include <iostream>
using namespace std;

int main() {
	int n, stu[31] = {1};
	for(int i = 0; i < 28; i++) {
		cin >> n;
		stu[n] = 1;
	}
	
	for(int i = 1; i <= 30; i++)
		if(stu[i] != 1)	cout << i << "\n";
	
	return 0;
}