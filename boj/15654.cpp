#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
int arr[8] = {};
bool visited[8] = { false };

void recursive(int depth) {
	if(depth == m) {
		for(int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	} else {
		for(int i = 0; i < n; i++) {
			if(!visited[i]) {
				arr[depth] = v[i];
				visited[i] = true;
				recursive(depth + 1);
				visited[i] = false;
			}
		}
	}
	
	
}

int main() {
	int num;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	recursive(0);
	
	return 0;
}
