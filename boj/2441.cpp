#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for(int i = n; i >= 1; i--) {
		for(int j = 0; j < n - i; j++)
			cout << " ";
		for(int j = 1; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}
