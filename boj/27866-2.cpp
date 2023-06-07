#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string str;
	cin >> str >> n;
	cout << str.at(n - 1);
	
	return 0;
}
