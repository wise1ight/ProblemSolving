#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main() {
	deque<pair<int, int>> dq;
	int n, num;
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		cin >> num;
		dq.push_back({num, i});
	}
		
	for(int i = 1; i <= n; i++) {
		int delta = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();
		if(delta > 0) {
			for(int i = 0; i < delta - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		} else {
			for(int i = 0; i < -1 * delta; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	
	return 0;
}
