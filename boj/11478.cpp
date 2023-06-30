#include <iostream>
#include <set>
using namespace std;

int main() {
	set<string> s;
	string str;
	cin >> str;
	
	for(int i = 1; i <= str.length(); i++) {
		for(int j = 0; i + j <= str.length(); j++) {
			s.insert(str.substr(j,i));
		}
	}
	
	cout << s.size();
	
	return 0;
}
