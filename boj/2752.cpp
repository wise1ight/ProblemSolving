#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	for(int i = 0; i < 3; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());
	
	for(auto& e: v)
		cout << e << " ";
	return 0;
}
