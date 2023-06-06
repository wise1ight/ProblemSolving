#include <iostream>
using namespace std;

int main() {
	int n, arr[100], v, count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> v;
	
	for(int i = 0; i < n; i++)
		count += (arr[i] == v);
		
	cout << count;
	
	return 0;
}