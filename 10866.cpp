#include <iostream>
#define MAX_SIZE 20002
using namespace std;

class deque {
	private:
		int arr[MAX_SIZE];
		int _front;
		int _back;
		
	public:
		deque() {
			_front = MAX_SIZE / 2;
			_back = MAX_SIZE / 2;
		}
		
		void push_front(int target) {
			arr[--_front] = target;
		}
		
		void push_back(int target) {
			arr[_back++] = target;
		}
		
		int pop_front() {
			if(!empty())
				return arr[_front++];
			else
				return -1;
		}
		
		int pop_back() {
			if(!empty())
				return arr[--_back];
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

	deque q;

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.compare("push_front") == 0) {
			int data;
			cin >> data;
			q.push_front(data);
		} else if (str.compare("push_back") == 0) {
			int data;
			cin >> data;
			q.push_back(data);
		} else if (str.compare("pop_front") == 0) {
			cout << q.pop_front() << "\n";
		} else if (str.compare("pop_back") == 0) {
			cout << q.pop_back() << "\n";
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
