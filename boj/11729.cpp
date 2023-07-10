#include <iostream>
#include <utility>
#include <vector>
using namespace std;
 
int k = 0;
vector<pair<int, int>> v;
 
void hanoi(int n, int from, int m, int to) {
	if(n == 1) {
		k++;
		v.push_back({from, to});
	} else {
		hanoi(n - 1, from, to, m);
		k++;
		v.push_back({from, to});
		hanoi(n - 1, m, from, to);
	}
}
 
int main() {
	int n;
	cin >> n;
	hanoi(n, 1, 2, 3);
	cout << k << "\n";
	for(auto& p : v) {
		cout << p.first << " " << p.second << "\n";
	}
	return 0;
}
