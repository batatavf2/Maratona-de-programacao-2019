#include <bits/stdc++.h>
#define N 100005
#define ll long long int

using namespace std;

typedef struct op {
	ll l;
	ll r;
	ll d;
}op;

op ops[N];
ll v[N], inc[N], inc2[N], rp[N], c, n, k, m, l, r, ans[N];

int main() {
	scanf("%I64d %I64d %I64d", &n, &m, &k);

	for(ll i = 1; i <= n; i++) {
		scanf("%I64d", &v[i]);
	}

	for(ll i = 1; i <= m; i++) {
		scanf("%I64d %I64d %I64d", &ops[i].l, &ops[i].r, &ops[i].d);
	}


	for(ll i = 1; i <= k; i++) {
		scanf("%I64d %I64d", &l, &r);
		inc[l] += 1;
		inc[r+1] -= 1;
	}

	for(ll i = 1; i <= m; i++) {
		c += inc[i];
		rp[i] += c;
	}

	// puts("rp");
	// for(int i = 1; i <= n; i++) {
	// 	printf("%I64d ", rp[i]);
	// }


	for(ll i = 1; i <= m; i++) {
		inc2[ops[i].l] += rp[i]*ops[i].d;
		inc2[ops[i].r+1] -= rp[i]*ops[i].d;
	}

	c = 0;

	for(ll i = 1; i <= n; i++) {
		c += inc2[i];
		ans[i] = c + v[i];
	}

	for(ll i = 1; i <= n; i++) {
		printf("%I64d ", ans[i]);
	}

	printf("\n");
	return 0;
}