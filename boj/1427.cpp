#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> digits;
	int n;
	cin >> n;
	
	while(n != 0) {
		digits.push_back(n % 10); 
		n /= 10;
	}
	
	sort(digits.begin(), digits.end(), greater<int>());
	
	for(auto &digit : digits)
		cout << digit;
	
	return 0;
}
