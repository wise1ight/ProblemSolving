#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string S;
	int q, counter[200002][26];
	cin >> S >> q;
	
	for(int i = 0; i < 26; i++)
		counter[0][i] = 0;
		
	for(int i = 1; i <= S.length(); i++) {
		for(int j = 0; j < 26; j++)
			counter[i][j] = counter[i - 1][j];
			
		counter[i][S.at(i - 1) - 'a']++;
	}
		
	for(int t = 0; t < q; t++) {
		char a;
		int l, r;
		cin >> a >> l >> r;
		cout << counter[r + 1][a - 'a'] - counter[l][a - 'a'] << "\n";
	}
	
	return 0;
}
