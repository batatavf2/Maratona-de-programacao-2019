#include <bits/stdc++.h>

#define ll long long int
#define N 200005

using namespace std;

ll freq[N], inc[N], arr[N], s, n, q, x, aux;

int main() {
	scanf("%I64d %I64d", &n, &q);

	for(int i = 1; i <= n; i++) {
		scanf("%I64d", &arr[i]);
	}

	for(int i = 1; i <= q; i++) {
		scanf("%I64d", &x);
		inc[x] += 1;
		scanf("%I64d", &x);
		inc[x+1] -= 1;
	}

	for(int i = 1; i <= n; i++) {
		aux += inc[i];
		freq[i] += aux;
	}

	sort(arr+1, arr+n+1);
	sort(freq+1, freq+n+1);

	for(int i = 1; i <= n; i++) {
		s += arr[i]*freq[i];
	}

	printf("%I64d\n", s);

	return 0;
}