#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<int, string>> v;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int age;
		string str;
		cin >> age >> str;
		v.push_back(make_pair(age, str));
	}
	
	stable_sort(v.begin(), v.end(), [](const auto& lhs, const auto& rhs)
	{
		return lhs.first < rhs.first;
	});
	
	for(auto& item : v)
		cout << item.first << " " << item.second << "\n";
		
	return 0;
}
