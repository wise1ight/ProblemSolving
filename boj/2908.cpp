#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	if(stoi(a) > stoi(b))
		cout << a;
	else
		cout << b;
	
	return 0;
}
