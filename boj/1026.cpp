#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, tmp, sum = 0;
	vector<int> v1, v2;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		v1.push_back(tmp);
	}
	
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		v2.push_back(tmp);
	}
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());
	
	for(int i = 0; i < n; i++) {
		sum += v1[i] * v2[i];
	}
	
	cout << sum;
	
	return 0;
}
