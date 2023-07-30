#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int result = 0, multiply = 1;
	for(int i = str.length() - 1; i >= 0; i--) {
		if(str.at(i) <= '9')
			result += (str.at(i) - '0') * multiply;
		else
			result += (str.at(i) - 'A' + 10) * multiply;
			
		multiply *= 16;
	}
	
	cout << result;
	
	return 0;
}
