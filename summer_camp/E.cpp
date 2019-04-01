#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll fastExp(ll a, ll e, ll mod) {

	ll ans = 1;

	while(e > 0) {
		if(e%2) {
			ans = ans*a % mod;
			e -= 1;
		}
		else {
			a = a*a % mod;
			e = e/2;
		}
	}

	return ans;
}

int main() {
	ll n;

	scanf("%lld", &n);

	if(n != 0)
		printf("%lld\n", (fastExp(2, 2*n-1, MOD) + fastExp(2, n-1, MOD))%MOD);
	else
		printf("1\n");



	return 0;
}