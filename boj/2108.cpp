#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int n, most_count = 0;
    cin >> n;
    vector<int> arr(n), freq(8001), mosts;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        freq[arr[i] + 4000]++;
    }
    
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 8001; i++) {
    	if(freq[i] > most_count)
    		most_count = freq[i];
    }
    for(int i = 0; i < 8001; i++) {
    	if(freq[i] == most_count)
    		mosts.push_back(i - 4000);
    }
    sort(mosts.begin(), mosts.end());

    cout << int(round((float)accumulate(arr.begin(), arr.end(), 0) / n)) << "\n";
    cout << arr[n / 2] << "\n";
    if (mosts.size() > 1)
    	cout << mosts[1] << "\n";
    else
    	cout << mosts[0] << "\n";
    cout << arr[n - 1] - arr[0];
    
	return 0;
}