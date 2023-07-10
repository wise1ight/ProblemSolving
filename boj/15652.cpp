#include <iostream>
using namespace std;

int n, m;
int arr[9] = {};

void dfs(int num, int depth) {
	if(depth == m) {
		for(int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
		
	for(int i = num; i <= n; i++) {
		arr[depth] = i;
		dfs(i, depth + 1);
	}
}

int main() {
	cin >> n >> m;
	
	dfs(1, 0);
	
	return 0;
}
