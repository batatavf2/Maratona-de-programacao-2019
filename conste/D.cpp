#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, l, r, op, x, q;
	vector<ll> v, o, pv, po;


	scanf("%lld", &n);

	for(ll i = 1; i <= n; i++) {
		scanf("%lld", &x);
		v.push_back(x);
		o.push_back(x);
	}

	sort(o.begin(), o.end());

	ll s1 = 0, s2 = 0;
	pv.push_back(0);
	po.push_back(0);
	for(ll i = 0; i < n; i++) {
		s1 += v[i];
		s2 += o[i];
		pv.push_back(s1);
		po.push_back(s2);
	}
	scanf("%lld", &q);

	for(ll i = 1; i <= q; i++) {
		scanf("%lld %lld %lld", &op, &l, &r);
		if(op == 1)
			printf("%lld\n", pv[r] - pv[l-1]);
		else
			printf("%lld\n", po[r] - po[l-1]);

	}

	return 0;
}