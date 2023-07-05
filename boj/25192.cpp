#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	set<string> s;
	string str;
	int n, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> str;
		if(str.compare("ENTER") == 0) {
			sum += s.size();
			s.clear();
		} else {
			s.insert(str);
		}
	}
	sum += s.size();
	cout << sum;
	
	return 0;
}
