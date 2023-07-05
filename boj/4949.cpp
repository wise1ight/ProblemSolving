#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while(true) {
		stack<char> s;
		string str;
		getline(cin, str);
		
		if(str.compare(".") == 0)
			break;
		
		bool satisfy = true;
		
		for(int j = 0; j < str.length(); j++) {
			if(str.at(j) == '(' || str.at(j) == '[')
				s.push(str.at(j));
			else if(str.at(j) == ')' || str.at(j) == ']') {
				if(!s.empty() &&
					((str.at(j) == ')' && s.top() == '(') || (str.at(j) == ']' && s.top() == '[')) )
					s.pop();
				else {
					satisfy = false;
					break;
				}
			}
		}
		
		if(s.empty() && satisfy)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
