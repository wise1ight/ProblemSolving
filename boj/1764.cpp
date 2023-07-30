#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v1, v2;
	string str;
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> str;
		v1.push_back(str);
	}
	sort(v1.begin(), v1.end());
	
	for(int i = 0; i < m; i++) {
		cin >> str;
		v2.push_back(str);
	}
	sort(v2.begin(), v2.end());
	
	vector<string> result;
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));
	
	cout << result.size() << "\n";
	for(auto& e : result)
		cout << e << "\n";
	
	return 0;
}
