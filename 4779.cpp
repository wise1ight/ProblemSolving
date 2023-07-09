#include <iostream>
#include <cmath>
using namespace std;

void recursive(string& s, int l, int r) {
	int length = r - l + 1;
	if(length == 1)
		return;
	else {
		recursive(s, l, l + length / 3 - 1);
		
		for(int i = l + length / 3; i <= r - length / 3; i++)
			s[i] = ' ';
		
		recursive(s, r - length / 3 + 1, r);
	}
}

int main() {
	int n;
	while(cin >> n) {
		string str = "";
		for(int i = 0; i < pow(3, n); i++)
			str += "-";
		
		recursive(str, 0, str.length() - 1);
		cout << str << "\n";
	}
	return 0;
}
