#include <iostream>
using namespace std;

int N;
bool goal = false;
int board[3][3];

void move(int x, int y) {
	if(x >= N || y >= N)
		return;
	
	int dist = board[x][y];
	if(dist == -1) {
		goal = true;
		return;
	} else if (dist == 0)
		return;
	
	move(x + dist, y);
	move(x, y + dist);
}

int main() {
	cin >> N;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}
	
	move(0, 0);
	
	if(goal)
		cout << "HaruHaru";
	else
		cout << "Hing";
	return 0;
}
