#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	bool isPrime[246913] = {false, false};
	for(int i = 2; i <= 246912; i++) {
		isPrime[i] = true;
	}
	
	for(int i = 2; i <= 246912; i++) {
		for(int j = 2; i * j <= 246912; j++)
			isPrime[i * j] = false;
	}
	
	while(true) {
		int n, count = 0;
		cin >> n;
		if(n == 0)
			break;
			
		for(int i = n + 1; i <= 2 * n; i++) {
			if(isPrime[i])
				count++;
		}
		
		cout << count << "\n";
	}
	
	return 0;
}
