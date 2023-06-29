#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n, tmp, counter[10001] = {};
	cin >> n;
 
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		counter[tmp]++;
	}
 
	for(int i = 1; i <= 10000; i++) {
		for(int j = 0; j < counter[i]; j++)
			cout << i << "\n";
	}
 
	return 0;
}
