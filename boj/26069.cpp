#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, bool> m;
	int n;
	string a, b;
	cin >> n;
	m.insert({"ChongChong", true});
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		if(m[a] || m[b]) {
			m[a] = true;
			m[b] = true;
		}
	}
	
	int count = 0;
	for (auto& iter : m) {
		if(iter.second)
			count++;
	}
	
	cout << count;
	
	return 0;
}
