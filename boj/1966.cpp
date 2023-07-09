#include <iostream>
#include <queue>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		
		queue<pair<int,int>> q;
		priority_queue<int> pq;
		for(int j = 0; j < n; j++) {
			int priority;
			cin >> priority;
			q.push({priority, j});
			pq.push(priority);
		}
		
		int count = 0;
		while(!q.empty()) {
			int priority = q.front().first;
			int order = q.front().second;
			
			q.pop();
			if(priority == pq.top()) {
				pq.pop();
				count++;
				if(order == m) {
					cout << count << "\n";
					break;
				}
			} else {
				q.push({priority, order});
			}
		}
	}
	
	return 0;
}
