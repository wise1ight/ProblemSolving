#include <iostream>
#define MAX_SIZE 1000000
using namespace std;

int sorted[MAX_SIZE];

void merge(int arr[], int left, int mid, int right) {
	int l = left, r = mid + 1, pos = left;
	
	while(l <= mid && r <= right) {
		if(arr[l] <= arr[r])
			sorted[pos++] = arr[l++];
		else
			sorted[pos++] = arr[r++];
	}
	
	while(l <= mid)
		sorted[pos++] = arr[l++];
	while(r <= right)
		sorted[pos++] = arr[r++];
		
	for(int i = left; i <= right; i++)
		arr[i] = sorted[i];
}

void partition(int arr[], int left, int right) {
	int mid = (left + right) / 2;
	
	if (left < right) {
		partition(arr, left, mid);
		partition(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main() {
	int n, arr[MAX_SIZE] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	partition(arr, 0, n - 1);
	
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";
	
	return 0;
}