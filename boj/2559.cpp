#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k, arr[100000], result;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	int sectionSum = 0;
	for(int i = 0; i < k; i++) {
		sectionSum += arr[i];
	}
	result = sectionSum;
	
	for(int i = 1; i < n - k + 1; i++) {
		sectionSum -= arr[i - 1];
		sectionSum += arr[i + k - 1];
		result = max(result, sectionSum);
	}
	
	cout << result;
	return 0;
}
