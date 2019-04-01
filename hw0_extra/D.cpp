#include <bits/stdc++.h>

using namespace std;

long long int n, v[100005], p ,boxes, w, h, acc;

int main() {

	scanf("%I64d", &n);

	for(long long int i = 1; i <= n; i++) {
		scanf("%I64d", &v[i]);
	}

	p = 1;
	acc = 1;

	scanf("%I64d", &boxes);

	for(long long int i = 1; i <= boxes; i++) {
		scanf("%I64d %I64d", &w, &h);
		printf("%I64d\n", max(acc, v[w]));

		acc = max(acc, v[w]) + h;
	}


	return 0;
}

