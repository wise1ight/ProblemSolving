#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end(), greater<int>());
	
	cout << v[k - 1];
	
	return 0;
}
