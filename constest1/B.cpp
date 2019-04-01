#include <bits/stdc++.h>

using namespace std;

int n, k, v[200005], s = 0, x, ind, last, minS;

int main() {
	scanf("%d%d", &n, &k);

	ind = 1;
	for(int i = 1; i <= n; i++) {
		scanf("%d", &v[i]);
	}

	for(int i = 1; i <= k; i++)
		s += v[i];

	minS = s;

	for(int j = 1; j <= n-k; j++) {
		// printf("s %d\nminS %d\n", s, minS);
		
		s += v[k+j] - v[j];

		if(s < minS) {
			minS = s;
			ind = j+1;
		}

	}


	printf("%d\n", ind);
	return 0;
}