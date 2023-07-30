#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, sum = 0;
	vector<int> v;
	for(int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	
	cout << sum / 5 << "\n" << v[2];
	
	return 0;
}
