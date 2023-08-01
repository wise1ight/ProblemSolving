#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int freq = 0, count[26] = {};
	string str;
	while(getline(cin, str)) {
		for(int i = 0; i < str.length(); i++) {
			if(str[i] == ' ')
				continue;
			count[str[i] - 'a']++;
			freq = max(freq, count[str[i] - 'a']);
		}
	}
	
	for(int i = 0; i < 26; i++) {
		if(count[i] == freq) {
			cout << (char)(i + 'a');
		}
	}

	return 0;
}
