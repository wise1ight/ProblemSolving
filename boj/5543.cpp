#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
	vector<int> buger(3);
	vector<int> drink(2);
 
	for(int i = 0; i < 3; i++)
		cin >> buger[i];
 
	for(int i = 0; i < 2; i++)
		cin >> drink[i];
 
	sort(buger.begin(), buger.end());
	sort(drink.begin(), drink.end());
 
	cout << buger[0] + drink[0] - 50;
 
	return 0;
}
