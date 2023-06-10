#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<char> stack;
	int n, b;
	cin >> n >> b;
	
	while(true) {
		int mod = n % b;
		if(mod >= 10)
			stack.push((char)(mod - 10 + 'A'));
		else
			stack.push((char)(mod + '0'));
		n /= b;
		if(n == 0)
			break;
	}
	
	while(!stack.empty()) {
		cout << stack.top();
		stack.pop();
	}
	
	return 0;
}
