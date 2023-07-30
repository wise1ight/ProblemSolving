#include <iostream>
using namespace std;

int main() {
	while(true) {
		string str;
		cin >> str;
		if(str.compare("0") == 0)
			break;
		
		int len = str.length();
		bool isPalindrome = true;
		for(int i = 0; i < len / 2; i++) {
			if(str[i] != str[len - i - 1]) {
				isPalindrome = false;
				break;
			}
		}
		
		if(isPalindrome)
			cout << "yes\n";
		else
			cout << "no\n";
		
	}
	
	return 0;
}