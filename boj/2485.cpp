#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if(a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	
	int r = a % b;
	if(r == 0)
		return b;
	else
		return gcd(b, r);
	
}

int main() {
	vector<int> v1;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v1.push_back(num);
	}
	
	int g = v1[1] - v1[0];
	for(int i = 2; i < v1.size(); i++) {
		int diff = v1[i] - v1[i - 1];
		g = gcd(diff, g);
	}
	
	cout << (v1[v1.size() - 1] - v1[0]) / g + 1 - v1.size();
	
	return 0;
}
