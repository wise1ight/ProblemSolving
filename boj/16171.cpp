#include <iostream>
using namespace std;

string removeNums(string str) {
    int current = 0;
    for(int i = 0; i < str.length(); i++) {
        if(!isdigit(str[i])){
            str[current] = str[i];
            current++;
        }
    }

    return str.substr(0,current);
}

int main() {
	string str, keyword;
	cin >> str >> keyword;
	
	string str2 = removeNums(str);
	
	if (str2.find(keyword) != string::npos)
		cout << 1;
	else
		cout << 0;
	return 0;
}
