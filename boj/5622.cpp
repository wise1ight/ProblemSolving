#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int time = 0;
	
	for(int i = 0; i < str.length(); i++) {
		if(str.at(i) <= 'C')
			time += 3;
		else if(str.at(i) <= 'F')
			time += 4;
		else if(str.at(i) <= 'I')
			time += 5;
		else if(str.at(i) <= 'L')
			time += 6;
		else if(str.at(i) <= 'O')
			time += 7;
		else if(str.at(i) <= 'S')
			time += 8;
		else if(str.at(i) <= 'V')
			time += 9;
		else if(str.at(i) <= 'Z')
			time += 10;
	}
	
	cout << time;
	
	return 0;
}
