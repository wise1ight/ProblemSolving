#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1, v2;
	int n, m, num;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> num;
		v1.push_back(num);
	}
	sort(v1.begin(), v1.end());
	
	for(int i = 0; i < m; i++) {
		cin >> num;
		v2.push_back(num);
	}
	sort(v2.begin(), v2.end());
	
	vector<int> result;
	set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));
	
	cout << result.size() << "\n";
	
	return 0;
}
