#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
	int country, num, score;
};

bool compare(const Result& r, const Result& l) {
	return r.score > l.score;
}

int main() {
	int N, countries[101] = {0}, count = 0;
	cin >> N;
	
	Result arr[N];
	for(int i = 0; i < N; i++) {
		cin >> arr[i].country >> arr[i].num >> arr[i].score;
	}
	
	sort(arr, arr + N, compare);
	
	for(int i = 0; i < N; i++) {
		if(countries[arr[i].country] >= 2)
			continue;
		
		cout << arr[i].country << " " << arr[i].num << "\n";
		countries[arr[i].country]++;
		count++;
		
		if(count == 3)
			break;
	}
	
	return 0;
}
