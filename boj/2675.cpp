#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t, r;
	string s;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> r >> s;
		
		for(int j = 0; j < s.length(); j++) {
			for(int k = 0; k < r; k++) cout << s[j];
		}
		
		cout << "\n";
	}
	
	return 0;
}
