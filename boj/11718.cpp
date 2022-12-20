#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	while (true) {
		getline(cin, str);
		if (str.length() == 0)
			break;
		cout << str << "\n";
	}
	return 0;
}