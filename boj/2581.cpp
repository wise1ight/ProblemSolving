#include <iostream>
#include <array>
using namespace std;

int main() {
	std::array<bool,10001> arr;
	arr.fill(true);
	arr[0] = false;
	arr[1] = false;
	
	for(int i = 2; i <= 10000; i++) {
		for(int j = 2; i * j <= 10000; j++)
			arr[i * j] = false;
	}
	
	int m, n, sum = 0, min = 0;
	cin >> m >> n;
	for(int i = m; i <= n; i++) {
		if(arr[i] == true) {
			sum += i;
			if(min == 0)
				min = i;
		}
	}
	
	if(sum == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;
	
	return 0;
}