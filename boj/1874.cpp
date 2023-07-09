#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	vector<char> v;
	stack<int> s;
	int n, idx = 1;
	cin >> n;
	
	while(true) {
		int num;
		cin >> num;
		
		while(idx <= num) {
			s.push(idx++);
			v.push_back('+');
		}
		
		if (!s.empty() && s.top() == num) {
			s.pop();
			v.push_back('-');
		} else {
			break;
		}
	}
	
	if(s.empty()) {
		for(const auto& c : v)
			cout << c << "\n";
	} else {
		cout << "NO";
	}
	return 0;
}
