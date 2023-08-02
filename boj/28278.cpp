#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int n, c, x;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> c;
		if(c == 1) {
			cin >> x;
			s.push(x);
		} else if (c == 2) {
			if(s.empty()) {
				cout << -1 << "\n";
			} else {
				cout << s.top() << "\n";
				s.pop();
			}
		} else if (c == 3) {
			cout << s.size() << "\n";
		} else if (c == 4) {
			cout << (int)s.empty() << "\n";
		} else if (c == 5){
			if(s.empty()) {
				cout << -1 << "\n";
			} else {
				cout << s.top() << "\n";
			}
		}
	}
	return 0;
}
