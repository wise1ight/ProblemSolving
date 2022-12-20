#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, temp;
	vector<int> org;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> temp;
		org.push_back(temp);
	}
	
	vector<int> ord(org);
	sort(ord.begin(),ord.end());
	ord.erase(unique(ord.begin(),ord.end()),ord.end());
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(ord.begin(), ord.end(), org[i]);
		cout << distance(ord.begin(), it) << " ";
	}
	
	return 0;
}