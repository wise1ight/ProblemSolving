#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	
	sort(v.begin(), v.end(), [](const auto& lhs, const auto& rhs)
	{
		if (lhs.length() == rhs.length())
			return lhs < rhs;
		return lhs.length() < rhs.length();
	});
	
	v.erase(unique(v.begin(), v.end()), v.end());
	for(auto& str : v)
		cout << str << "\n";
		
	return 0;
}
