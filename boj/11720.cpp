#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, sum = 0;
	string str;
	
	cin >> n >> str;
	for(int i = 0; i < n; i++)
		sum += str.at(i) - '0';
	
	cout << sum;
	
	return 0;
}
