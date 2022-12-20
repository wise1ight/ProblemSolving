#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int map[500][500];
	int n, m, b, h_max = 0, h_min = 257, h_answer = 0;
	long long t_answer = -1;
	cin >> n >> m >> b;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> map[i][j];
			h_max = max(h_max, map[i][j]);
			h_min = min(h_min, map[i][j]);
		}
	}
	
	for(int h = h_min; h <= h_max; h++) {
		int t = 0, inven = b;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				int diff = map[i][j] - h;
				if(diff < 0) {
					t += diff * -1;
					inven += diff;
				} else if (diff > 0) {
					t += diff * 2;
					inven += diff;
				}
			}
		}
		
		if (inven < 0)
			continue;

		if(t_answer == -1 || t <= t_answer) {
			t_answer = t;
			h_answer = max(h_answer, h);
		}
	}
	
	cout << t_answer << " " << h_answer;
	
	return 0;
}