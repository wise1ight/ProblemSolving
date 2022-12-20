#include <iostream>
#include <string>
using namespace std;

int main() {
	string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int calender[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int d, m, passed = 0;
	cin >> d >> m;
	
	for(int i = 0; i < m - 1; i++)
		passed += calender[i];
	passed += d;
		
	cout << days[(passed + 2) % 7];
	
	return 0;
}