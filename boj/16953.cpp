#include <iostream>
#include <algorithm>
using namespace std;

long long A, B, cnt = -1;

void make(long long num, int depth) {
	if(num > B)
		return;
	if(num == B) {
		cnt = depth;
		return;
	}

	make(num * 2, depth + 1);
	make(num * 10 + 1, depth + 1);
}

int main() {
	cin >> A >> B;
	make(A, 1);
	
	cout << cnt;
	
	return 0;
}
