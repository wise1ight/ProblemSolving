#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	map<int, int> cards;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		cards[num]++;
	}
	
	cin >> m;
	for(int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << cards[num] << " ";
	}
	
	return 0;
}
