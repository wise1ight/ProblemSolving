#include <iostream>
using namespace std;

int main() {
	string str, num;
	cin >> str;
	
	bool mode = false;
	int result = 0, size = str.length();
	for(int i = 0; i <= size; i++) {
		if(str[i] == '-' || str[i] == '+' || i == size) {
			if(mode) {
				result -= stoi(num);
				num = "";
			} else {
				result += stoi(num);
				num = "";
			}
		} else {
			num += str[i];
		}
		
		if(str[i] == '-')
			mode = true;
	}
	
	cout << result;
	
	return 0;
}
