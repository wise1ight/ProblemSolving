#include <iostream>
#define MAX_SIZE 10000
using namespace std;

class stack {
	private:
		int arr[MAX_SIZE];
		int _top;
		
	public:
		stack() {
			_top = -1;
		}
		
		void push(int target) {
			arr[++_top] = target;
		}
		
		int pop() {
			if(!empty())
				return arr[_top--];
			else
				return -1;
		}
		
		int size() {
			return _top + 1;
		}
		
		bool empty() {
			return size() == 0;
		}
		
		int top() {
			if(!empty())
				return arr[_top];
			else
				return -1;
		}
};

int main() {
	stack s;

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.compare("push") == 0) {
			int data;
			cin >> data;
			s.push(data);
		} else if (str.compare("pop") == 0) {
			cout << s.pop() << "\n";
		} else if (str.compare("size") == 0) {
			cout << s.size() << "\n";
		} else if (str.compare("empty") == 0) {
			cout << s.empty() << "\n";
		} else if (str.compare("top") == 0) {
			cout << s.top() << "\n";
		}
	}
	return 0;
}
