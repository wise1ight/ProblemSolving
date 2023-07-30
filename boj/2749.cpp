#include <iostream>
#include <array>
#define MOD 1000000
using namespace std;

array<array<long long int, 2>, 2> multiply(array<array<long long int, 2>, 2> x, array<array<long long int, 2>, 2> y) {
	array<array<long long int, 2>, 2> tmp;
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			long long int element = 0;
			for(int k = 0; k < 2; k++)
				element += x[i][k] * y[k][j];
			tmp[i][j] = element % MOD;
		}
	}
	
	return tmp;
}

array<array<long long int, 2>, 2> pow(array<array<long long int, 2>, 2> mat, long long int e) {
	if (e <= 1) {
		return mat;
	} else if (e % 2 == 0) {
		array<array<long long int, 2>, 2> m = pow(mat, e / 2);
		m = multiply(m, m);
		return m;
	} else {
		array<array<long long int, 2>, 2> m = pow(mat, e - 1);
		m = multiply(mat, m);
		return m;
	}
}

int main() {
	long long int n;
	cin >> n;
	
	array<array<long long int, 2>, 2> mat;
	mat[0][0] = 1;
	mat[0][1] = 1;
	mat[1][0] = 1;
	mat[1][1] = 0;
	array<array<long long int, 2>, 2> result = pow(mat, n - 1);
	if(n == 0)
		cout << 0;
	else
		cout << (result[1][0] + result[1][1]) % MOD;
	
	return 0;
}
