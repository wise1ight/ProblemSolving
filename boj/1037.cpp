#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	vector<int> v;
	int n, num;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
 
	sort(v.begin(), v.end());
 
	cout << v[0] * v[v.size() - 1];
 
	return 0;
}

