#include <iostream>
#include <string>
using namespace std;

int _count = 0;

int recursion(const string& str, int l, int r){
	_count++;
    if(l >= r) return 1;
    else if(str[l] != str[r]) return 0;
    else return recursion(str, l+1, r-1);
}

int isPalindrome(const string& str){
    return recursion(str, 0, str.length()-1);
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		string str;
		cin >> str;
		_count = 0;
		cout << isPalindrome(str) << " " << _count << "\n";
	}
	return 0;
}
