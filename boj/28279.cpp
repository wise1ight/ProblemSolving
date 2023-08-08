#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque<int> dq;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int c, num;
		cin >> c;
		switch(c) {
			case 1:
				cin >> num;
				dq.push_front(num);
				break;
			case 2:
				cin >> num;
				dq.push_back(num);
				break;
			case 3:
				if(dq.empty())
					cout << "-1\n";
				else {
					cout << dq.front() << "\n";
					dq.pop_front();
				}
				break;
			case 4:
				if(dq.empty())
					cout << "-1\n";
				else {
					cout << dq.back() << "\n";
					dq.pop_back();
				}
				break;
			case 5:
				cout << dq.size() << "\n";
				break;
			case 6:
				cout << (int) dq.empty() << "\n";
				break;
			case 7:
				if(dq.empty())
					cout << "-1\n";
				else
					cout << dq.front() << "\n";
				break;
			case 8:
				if(dq.empty())
					cout << "-1\n";
				else
					cout << dq.back() << "\n";
				break;
		}
	}
	
	return 0;
}
