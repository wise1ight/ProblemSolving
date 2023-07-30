#include <iostream>
using namespace std;

int main() {
	int n, arr[1001], udp[1001], ddp[1001], answer = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> arr[i];
	
	for(int i = 1; i <= n; i++) {
		udp[i] = 1;
		for(int j = 1; j <= i; j++) {
			if(arr[j] < arr[i])
				udp[i] = max(udp[i], udp[j] + 1);
		}
	}
	
	for(int i = n; i >= 1; i--) {
		ddp[i] = 1;
		for(int j = n; j >= i; j--) {
			if(arr[j] < arr[i])
				ddp[i] = max(ddp[i], ddp[j] + 1);
		}
	}
	
	for(int i = 1; i <= n; i++) {
		answer = max(answer, udp[i] + ddp[i] - 1);
	}
	
	cout << answer;
	
	return 0;
}
