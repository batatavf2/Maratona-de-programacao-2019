#include <bits/stdc++.h>

using namespace std;

long long int v[100005], n, s, m;

int main() {
	scanf("%I64d", &n);
	for(long long int i = 1; i <= n; i++) {
		scanf("%I64d", &v[i]);
	}

	sort(v+1, v+n+1);

	m = v[n];

	for(long long int i = 1; i <= n; i++) {
		s += m - v[i];
	}

	while(s < m) {
		s += n;
		m++;
	}

	printf("%I64d\n", m);


	return 0;
}