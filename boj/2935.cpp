#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string a, b, opr;
	cin >> a >> opr >> b;
	
	int lengthA = a.length();
	int lengthB = b.length();
	
	if(opr.compare("*") == 0) {
		cout << 1;
		for(int i = 0; i < lengthA + lengthB - 2; i++)
			cout << 0;
	} else if (opr.compare("+") == 0) {
		if(lengthA == lengthB) {
			cout << 2;
			for(int i = 0; i < lengthA - 1; i++)
				cout << 0;
		} else {
			for(int i = 0; i < max(lengthA, lengthB); i++) {
				if(i == max(lengthA, lengthB) - lengthA || i == max(lengthA, lengthB) - lengthB) {
					cout << 1;
				} else {
					cout << 0;
				}
			}
		}
	}
	return 0;
}
