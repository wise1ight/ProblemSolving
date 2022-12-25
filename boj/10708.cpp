#include <iostream>
using namespace std;

int main() {
	int N, M, target[100], score[100] = {0}, name;
	cin >> N >> M;
	for(int i = 0; i < M; i++)
		cin >> target[i];
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cin >> name;
			if(target[i] == name)
				score[j]++;
			else
				score[target[i] - 1]++;
		}
	}
	
	for(int i = 0; i < N; i++)
		cout << score[i] << "\n";
	
	return 0;
}
