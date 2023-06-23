#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int arr[10001] = { 0 };
	string a, b;
	cin >> a >> b;
	
	for(int i = 0; i < a.length(); i++) {
		arr[10001 - a.length() + i] = a.at(i) - '0';
	}
	
	for(int i = 0; i < b.length(); i++) {
		arr[10001 - b.length() + i] += b.at(i) - '0';
	}
	
	for(int i = 10000; i >= 10001 - max(a.length(), b.length()); i--) {
		if(arr[i] >= 10) {
			arr[i] -= 10;
			arr[i - 1]++;
		}
	}
	
	for(int i = 0; i < max(a.length(), b.length()) + 1; i++) {
		int pos = 10001 - (max(a.length(), b.length()) + 1) + i;
		if(i == 0 && arr[pos] == 0)
			continue;
			
		cout << arr[pos];
	}
		
	return 0;
}
