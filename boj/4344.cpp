#include <iostream>
using namespace std;

int main() {
	int c, n, score[1000] = { 0 }, sum, count = 0;
	cin >> c;
	for(int i = 0; i < c; i++) {
		cin >> n;
		sum = 0;
		count = 0;
		for(int j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}
		
		for(int j = 0; j < n; j++) {
			if(score[j] > (double) sum / n) count++;
		}
		
		cout << fixed;
		cout.precision(3);
		cout << (double)count / n * 100 << "%\n";
	}
	
	return 0;
}
