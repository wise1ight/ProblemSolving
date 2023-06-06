#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	m -= 45;
	if(m < 0)
		h -= 1;
	cout << (h + 24) % 24 << " " << (60 + m) % 60;
	
	return 0;
}