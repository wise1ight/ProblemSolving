#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m = 0;
	double arr[1000] = { 0 }, sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		m = max((double)m, arr[i]);
	}
	
	for(int i = 0; i < n; i++) {
		arr[i] = arr[i] / m * 100;
		sum += arr[i];
	}
	
	cout << fixed;
    cout.precision(10);
	cout << sum / n;
	
	return 0;
}
