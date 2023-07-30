#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	vector<pair<int, int>> v;
	int n, a, b, arr[100], dp[100], answer = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({a, b});
	}
	
	sort(v.begin(), v.end(), [](pair<int, int> const& lhs, std::pair<int, int> const& rhs)
	{
		return lhs.first < rhs.first;
	});
	
	for(int i = 0; i < v.size(); i++)
		arr[i] = v[i].second;
	
	for(int i = 0; i < n; i++) {
		dp[i] = 1;
		for(int j = 0; j < i; j++) {
			if(arr[j] < arr[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		answer = max(answer, dp[i]);
	}
	
	cout << v.size() - answer;
	
	return 0;
}
