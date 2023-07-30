#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		string str;
		cin >> str;
		bool satisfy = true;
		
		for(int j = 0; j < str.length(); j++) {
			if(str.at(j) == '(')
				s.push(1);
			else if(str.at(j) == ')') {
				if(!s.empty())
					s.pop();
				else {
					satisfy = false;
					break;
				}
			}
		}
		
		if(s.empty() && satisfy)
			cout << "YES\n";
		else
			cout << "NO\n";
			
		while(!s.empty())
			s.pop();
	}
	return 0;
}
