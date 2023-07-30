#include <iostream>
#define MAX_SIZE 2000000
using namespace std;

class queue {
	private:
		int arr[MAX_SIZE];
		int _front;
		int _back;
		
	public:
		queue() {
			_front = 0;
			_back = 0;
		}
		
		void push(int target) {
			arr[_back++] = target;
		}
		
		int pop() {
			if(!empty())
				return arr[_front++];
			else
				return -1;
		}
		
		int size() {
			return _back - _front;
		}
		
		bool empty() {
			return size() == 0;
		}
		
		int front() {
			if(!empty())
				return arr[_front];
			else
				return -1;
		}
		
		int back() {
			if(!empty())
				return arr[_back - 1];
			else
				return -1;
		}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue q;

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.compare("push") == 0) {
			int data;
			cin >> data;
			q.push(data);
		} else if (str.compare("pop") == 0) {
			cout << q.pop() << "\n";
		} else if (str.compare("size") == 0) {
			cout << q.size() << "\n";
		} else if (str.compare("empty") == 0) {
			cout << q.empty() << "\n";
		} else if (str.compare("front") == 0) {
			cout << q.front() << "\n";
		} else if (str.compare("back") == 0) {
			cout << q.back() << "\n";
		}
	}
	return 0;
}
