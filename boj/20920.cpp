#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	vector<string> dict;
	map<string, int> counter;
	int n, m;
	string str;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> str;
		if(str.length() >= m) {
			if(counter[str] == 0)
				dict.push_back(str);
			counter[str]++;
		}
	}
	
	sort(dict.begin(), dict.end(), [&counter](const auto& lhs, const auto& rhs) {
		if(counter[lhs] == counter[rhs] && lhs.length() == rhs.length()) {
			return lhs < rhs;
		} else if (counter[lhs] == counter[rhs]) {
			return lhs.length() > rhs.length();
		}
		return counter[lhs] > counter[rhs];
	});
	
	for(auto& str : dict)
		cout << str << "\n";
	
	return 0;
}
