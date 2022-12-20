#include <iostream>
#include <vector>
using namespace std;

int N, temp, arr[20];
bool check[2000001] = {};
vector<int> S;

void combi(int len, int pos, int depth) {
	if(len == depth) {
		int sum = 0;
		for(int i = 0; i < len; i++)
			sum += S[arr[i]];
		check[sum] = true;
		
		return;
	}
	
	for(int i = pos; i < N; i++) {
		arr[depth] = i;
		combi(len, i + 1, depth + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> temp;
		S.push_back(temp);
	}
	
	for(int i = 1; i <= N; i++)
		combi(i, 0, 0);
	
	for(int i = 1; i < 2000000; i++) {
		if(!check[i]) {
			cout << i;
			break;
		}
	}
	
	return 0;
}