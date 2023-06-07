#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string str;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> str;
		cout << str.at(0) << str.at(str.length() - 1) << "\n";
	}
	
	return 0;
}
