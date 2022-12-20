#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find(vector<int> &a, int value) {
	int start = 0;
	int end = a.size() - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (value < a[mid])
			end = mid - 1;
		else if (value > a[mid])
			start = mid + 1;
		else
			return 1;
	}
	
	return 0;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, temp;
	vector<int> a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	
	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> temp;
		cout << find(a, temp) << "\n";
	}
	
	return 0;
}