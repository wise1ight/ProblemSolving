#include <iostream>
using namespace std;

long long int sum = 0, cnt[1001], result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, num;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
		cnt[sum % m]++;
	}
	
	for(int i = 0; i < m; i++)
		result += cnt[i] * (cnt[i] - 1) / 2;
	
	cout << cnt[0] + result;
	
	return 0;
}
