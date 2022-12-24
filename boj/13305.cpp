#include <iostream>
#include <vector>

using namespace std;

int N;
long long temp;
vector<long long> dist, price;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	for(int i = 0; i < N - 1; i++) {
		cin >> temp;
		dist.push_back(temp);
	}
	
	for(int i = 0; i < N; i++) {
		cin >> temp;
		price.push_back(temp);
	}
	
	long long min_price = price[0], total = min_price * dist[0];
	for (int i = 1; i < N - 1; i++) {
		if (price[i] < min_price)
			min_price = price[i];
		total += min_price * dist[i];
	}
	
	cout << total;
	
	return 0;
}
