#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	set<string> remains;
	vector<string> result;
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		string name, action;
		cin >> name >> action;
		
		if(action.compare("enter") == 0)
			remains.insert(name);
		else if(action.compare("leave") == 0)
			remains.erase(name);
	}
	
	copy(remains.begin(), remains.end(), inserter(result, result.begin()));
	sort(result.begin(), result.end(), greater<string>());
	
	for(auto& e : result)
		cout << e << "\n";
	
	return 0;
}
