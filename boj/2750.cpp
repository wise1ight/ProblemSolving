#define MAX_SIZE 1000
#include <iostream>

using namespace std;

int sorted[MAX_SIZE];

void merge(int list[], int low, int mid, int high) {
    int n1 = low, n2 = mid+1, s = low, sorted[MAX_SIZE], i;
    while (n1 <= mid && n2 <= high) {
        if (list[n1] <= list[n2])
            sorted[s++] = list[n1++];
        else
            sorted[s++] = list[n2++];
    }
    
    while(n2 <= high)
        sorted[s++] = list[n2++];
    while(n1 <= mid)
        sorted[s++] = list[n1++];
    
    for (i = low; i <= high; i++)
        list[i] = sorted[i];
}

void merge_sort_DC(int list[], int low, int high) {
    int middle;
    if (low < high) {
        middle = (low + high) / 2;
        merge_sort_DC(list, low, middle);
        merge_sort_DC(list, middle + 1, high);
        merge(list, low, middle, high);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, list[MAX_SIZE];
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> list[i];
		
	merge_sort_DC(list, 0, n - 1);
		
	for (int i = 0; i < n; i++)
		cout << list[i] << '\n';
    
    return 0;
}