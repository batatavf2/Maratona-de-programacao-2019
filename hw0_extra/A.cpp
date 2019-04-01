#include<bits/stdc++.h>

using namespace std;

int main() {
	long long int m, n, mat[100][100], ones, zeros, c = 0;

	scanf("%lld %lld", &n, &m);

	for(int i = 1; i <= n; i++)
		for(int j = 1;j <= m; j++)
			scanf("%lld", &mat[i][j]);


	//line
	for(int i = 1; i <= n; i++) {
		ones = 0;
		zeros = 0;
		for(int j = 1; j <= m; j++) {
			if(mat[i][j] == 0)
				zeros++;
			else
				ones++;
		}
		c += (1ll<<ones) + (1ll<<zeros) - 2;	
	}

	for(int i = 1; i <= m; i++) {
		ones = 0;
		zeros = 0;
		for(int j = 1; j <= n; j++) {
			if(mat[j][i] == 0)
				zeros++;
			else
				ones++;
		}
			c += (1ll<<ones) + (1ll<<zeros) - 2;
	}

	printf("%lld\n", c-m*n);

	// for(int i = 1; i <= n; i++) {
	// 	for(int j = 1;j <= m; j++) {
	// 		printf("%d ", mat[i][j]);
	// 	}
	// 	printf("\n");
	// }

	return 0;
}