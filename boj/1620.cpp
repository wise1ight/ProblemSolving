#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string, string> dogam;
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) {
		string name;
		cin >> name;
		dogam.insert({to_string(i), name});
		dogam.insert({name, to_string(i)});
	}
	
	for(int i = 0; i < m; i++) {
		string key;
		cin >> key;
		cout << dogam[key] << "\n";
	}
	
	return 0;
}
