#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	long long int n;
	string fibo[10001] = {"0", "1", "1"};
	cin >> n;
	for(int i = 3; i <= n; i++) {
		int aLength = fibo[i - 1].length();
		int bLength = fibo[i - 2].length();
		string numStr = string(max(aLength, bLength), '0');
		for(int j = 0; j < max(aLength, bLength); j++) {
			int aNum = aLength - j - 1 < 0 ? 0 : fibo[i - 1].at(aLength - j - 1) - '0';
			int bNum = bLength - j - 1 < 0 ? 0 : fibo[i - 2].at(bLength - j - 1) - '0';
			int digit = (numStr[j] - '0') + aNum + bNum;
			
			numStr[j] = digit % 10 + '0';
			if(digit >= 10) {
				if(j + 1 < numStr.length())
					numStr[j + 1] = '1';
				else
					numStr = numStr + "1";
			}
		}
		
		reverse(numStr.begin(), numStr.end());
		fibo[i] = numStr;
	}
	
	cout << fibo[n];
	
	return 0;
}
