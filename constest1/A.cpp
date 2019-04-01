#include <bits/stdc++.h>

int main() {

	int n, v[105], x;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d", &x);
		v[x] = i;
	}

	for(int i = 1; i <= n; i++) {
		printf("%d ", v[i]);
	}	

	printf("\n");

	return 0;
}