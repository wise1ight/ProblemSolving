#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> l, vector<int> r) {
	if (l[1] == r[1])
		return l[0] < r[0];
	else
		return l[1] < r[1];
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    
    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    
	return 0;
}