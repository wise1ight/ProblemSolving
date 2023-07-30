#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	vector<int> v;
	int n, p, subsum = 0, result = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> p;
		v.push_back(p);
	}
 
	sort(v.begin(), v.end());
 
	for(auto& pi : v) {
		result += subsum + pi;
		subsum += pi;
	}
 
	cout << result;
 
	return 0;
}

