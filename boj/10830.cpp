#include <iostream>
#include <vector>
using namespace std;

int N;
long long B;

vector<vector<int>> A(5, vector<int>(5, 0));
vector<vector<int>> AS;

vector<vector<int>> calc(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> matrix(5, vector<int>(5, 0));
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0;
            for (int k = 0; k < N; k++) {
                sum += ((a[i][k] % 1000) * (b[k][j] % 1000)) % 1000;
            }
            matrix[i][j] = sum % 1000;
        }
    }
    return matrix;
}

vector<vector<int>> recursive(long long b) {
	if(b == 1)
		return A;
	else if(b == 2) {
		return AS;
	}
	
	vector<vector<int>> half = recursive(b / 2);
	vector<vector<int>> halfs = calc(half, half);
	
	if(b & 1) {
		return calc(halfs, A);
	} else {
		return halfs;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> B;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			cin >> A[i][j];
	}
	AS = calc(A, A);
	
	vector<vector<int>> matrix = recursive(B);
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			cout << matrix[i][j] % 1000 << " ";
		cout << "\n";
	}
	return 0;
}
