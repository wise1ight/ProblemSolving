#include <iostream>
#define MAX_LENGTH 101
using namespace std;

int main() {
	char str[MAX_LENGTH];
	cin >> str;
	
	for (int i = 0; i < MAX_LENGTH; i++) {
		if(str[i] == '\0')
			break;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			str[i] -= 32;
	}
	
	cout << str;
	
	return 0;
}