#include <iostream>
#include <array>
using namespace std;

int main() {
	std::array<bool,1001> arr;
	arr.fill(true);
	arr[0] = false;
	arr[1] = false;
	
	for(int i = 2; i <= 1000; i++) {
		for(int j = 2; i * j <= 1000; j++)
			arr[i * j] = false;
	}
	
	int n, num, count = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		if(arr[num] == true)
			count++;
	}
	
	cout << count;
	
	return 0;
}