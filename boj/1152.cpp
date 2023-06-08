#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0, start = 0, end;
	string str;
	getline(cin, str);
	end = str.length() - 1;
	
	for(int i = 0; i < str.length(); i++) {
    	if(str.at(i) != ' ') {
    		start = i;
    		break;
    	}
    }
	
	for(int i = str.length() - 1; i >= 0; i--) {
    	if(str.at(i) != ' ') {
    		end = i;
    		break;
    	}
    }
	
    for(int i = start; i <= end; i++) {
    	if(str.at(i) == ' ') count++;
    }
    
    if(start == end && str.at(start) == ' ')
    	cout << 0;
    else
		cout << count + 1;
	
	return 0;
}
