#include <iostream>
#include <string> 

using namespace std;

int main() {
	int n, i = 0, num = 666;
	cin >> n;
	
	while(true) {
		string str = to_string(num);
		if (str.find("666") != string::npos)
			i++;
		if (i == n)
			break;
		num++;
	}
	
	cout << num;
	
	return 0;
}