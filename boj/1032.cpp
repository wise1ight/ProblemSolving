#include <iostream>
#include <vector>
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
	
	for(int i = 0; i < v[0].length(); i++) {
		bool isDiff = false;
		for(int j = 0; j < n - 1; j++) {
			if(v[j].at(i) != v[j + 1].at(i))
				isDiff = true;
		}
		
		if(isDiff)
			cout << "?";
		else
			cout << v[0].at(i);
	}
	return 0;
}
