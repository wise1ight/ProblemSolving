#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int n, k;
	cin >> n >> k;
	
	long long int left = 1, right = n * n;
	while(left <= right) {
		long long int mid = (left + right) / 2;
		long long int count = 0;
		for(int i = 1; i <= n; i++)
			count += min(mid / i, n);
		
		if(count >= k) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	cout << left;
	
	return 0;
}
