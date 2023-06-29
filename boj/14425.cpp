#include <iostream>
#include <set>
using namespace std;

int main() {
	set<string> s;
	int n, m, count = 0;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}
	
	for(int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if(s.find(str) != s.end())
			count++;
	}
	
	cout << count;
		
	return 0;
}
