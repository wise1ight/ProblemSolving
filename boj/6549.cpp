#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int recursive(vector<int>& histogram, int start, int end) {
	if(start == end) return histogram[start];
	
	int mid = (start + end) / 2;
	int left = mid;
	int right = mid;
	int height = histogram[mid];
	long long int area = max(recursive(histogram, start, mid), recursive(histogram, mid + 1, end));
	
	while(start < left || right < end) {
		if (start < left && (right == end || histogram[left - 1] > histogram[right + 1])) {
			left--;
			height = min(height, histogram[left]);
		} else {
			right++;
			height = min(height, histogram[right]);
		}
		area = max(area, (long long int)(right - left + 1) * height);
	}
	
	return area;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while(true) {
		vector<int> histogram;
		int n, tmp;
		cin >> n;
		
		if(n == 0)
			break;
			
		for(int i = 0; i < n; i++) {
			cin >> tmp;
			histogram.push_back(tmp);
		}
		
		cout << recursive(histogram, 0, n - 1) << "\n";
	}
	return 0;
}
