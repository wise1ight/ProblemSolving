#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n, c, answer = 0;
	cin >> n >> c;
	vector<int> v(n);
	
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());
	
	int left = 0, right = v[n - 1] - v[0];
	int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		int count = 1, start = v[0];
		for(int i = 1; i < n; i++) {
			int end = v[i];
			if (end - start >= mid) {
				count++;
				start = end;
			}
		}
		
		if(count >= c) {
			left = mid + 1;
			answer = max(answer, mid);
		} else {
			right = mid - 1;
		}
	}
	
	cout << answer;
	
	return 0;
}
