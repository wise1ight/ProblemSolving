#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	int l = 0, r = str.length() - 1;
	
	while(true) {
		if(str.at(l) != str.at(r)) {
			cout << 0;
			return 0;
		}
		
		l++;
		r--;
		
		if(l > r) break;
	}
	
	cout << 1;
	
	return 0;
}
