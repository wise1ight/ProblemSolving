#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int freq[26] = { 0 }, M = 0, count = 0;
	char c;
	string str;
	cin >> str;
	
	for(int i = 0; i < str.length(); i++) {
		if(str.at(i) >= 'a') {
			M = max(++freq[str.at(i) - 'a'], M);
		} else {
			M = max(++freq[str.at(i) - 'A'], M);
		}
	}
	
	for(int i = 0; i < 26; i++) {
		if(freq[i] == M) {
			c = 'A' + i;
			count++;
		}
		
		if(count >= 2) {
			cout << "?";
			return 0;
		}
	}
	
	cout << c;
	
	return 0;
}
