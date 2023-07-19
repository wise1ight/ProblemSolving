#include <iostream>
using namespace std;

int main() {
	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string weeks[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int x, y, count = 0;
	cin >> x >> y;
	
	for(int i = 0; i < x - 1; i++)
		count += days[i];
	count += y;
	
	cout << weeks[count % 7];
	
	return 0;
}
