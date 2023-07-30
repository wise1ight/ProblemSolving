#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, sum = 0;
	vector<int> v;
	for(int i = 0; i < 3; i++) {
		cin >> n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	if(v[0] + v[1] <= v[2])
		v[2] -= v[2] - (v[0] + v[1]) + 1;
		
	for(int i = 0; i < 3; i++) {
		sum += v[i];
	}
	
	cout << sum;
	
	return 0;
}
