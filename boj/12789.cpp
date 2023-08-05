#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int n, ticket = 1;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		
		s.push(num);
		
		while(!s.empty() && s.top() == ticket) {
			s.pop();
			ticket++;
		}
	}
	
	if(s.empty())
		cout << "Nice";
	else
		cout << "Sad";
	
	return 0;
}
