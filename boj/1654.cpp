#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int k, n, maxlen;
	long long int answer = 0;
	cin >> k >> n;
	
	vector<int> v(n);
	
	for(int i = 0; i < k; i++) {
		cin >> v[i];
		maxlen = max(maxlen, v[i]);
	}
		
	long long int left = 1, right = maxlen;
	long long int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		int count = 0;
		
		for(int i = 0; i < k; i++)
			count += v[i] / mid;
			
		if(count >= n) {
			left = mid + 1;
			answer = max(answer, mid);
		} else {
			right = mid - 1;
		}
	}
	
	cout << answer;
	
	return 0;
}
