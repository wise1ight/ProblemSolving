#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	deque<int> dq;
	
	int n, m, count = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	
	for(int i = 0; i < m; i++) {
		int target;
		cin >> target;
		q.push(target);
	}
	
	while(!q.empty()) {
		int target = q.front();
		int l = 0, r = 0;
		while(dq.front() != target) {
			dq.push_back(dq.front());
			dq.pop_front();
			l++;
		}
		
		for(int i = 0; i < l; i++) {
			dq.push_front(dq.back());
			dq.pop_back();
		}
		
		r = dq.size() - l;
		
		if(l < r) {
			for(int i = 0; i < l; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			count += l;
		} else {
			for(int i = 0; i < r; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			count += r;
		}
		
		q.pop();
		dq.pop_front();
	}
	
	cout << count;
	
	return 0;
}
