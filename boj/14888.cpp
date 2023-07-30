#include <iostream>
#include <cmath>
using namespace std;

int MAX = -1000000000, MIN = 1000000000;
int n;
int arr[12] = {};
int pos[12] = {};
char oprs[12] = {};
bool visited[12] = {};

void dfs(int depth) {
	if(depth == n - 1) {
		int result = 0;
		for(int i = 0; i < n - 1; i++) {
			if(i == 0)
				result = arr[i];
			
			if(oprs[pos[i]] == '+')
				result += arr[i + 1];
			else if(oprs[pos[i]] == '-')
				result -= arr[i + 1];
			else if(oprs[pos[i]] == '*')
				result *= arr[i + 1];
			else if(oprs[pos[i]] == '/')
				result /= arr[i + 1];
		}
		
		MAX = max(MAX, result);
		MIN = min(MIN, result);
		
		return;
	}
		
	for(int i = 1; i <= n - 1; i++) {
		if(!visited[i]){
			visited[i] = true;
			pos[depth] = i;
			dfs(depth + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	int idx = 1;
	int o;
	cin >> o;
	for(int i = 0; i < o; i++)
		oprs[idx++] = '+';
	cin >> o;
	for(int i = 0; i < o; i++)
		oprs[idx++] = '-';
	cin >> o;
	for(int i = 0; i < o; i++)
		oprs[idx++] = '*';
	cin >> o;
	for(int i = 0; i < o; i++)
		oprs[idx++] = '/';
	
	dfs(0);
	
	cout << MAX << "\n" << MIN;
	
	return 0;
}
