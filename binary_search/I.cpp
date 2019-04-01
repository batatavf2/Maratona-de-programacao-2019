#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll vert, ans[185], x, n;

int main() {

	for(ll i = 3; i <= 360; i++) {
		for(ll j = 1; j <= i-2; j++) {
			if((j*180)%i == 0 && ans[(j*180)/i] == 0)
			ans[(j*180)/i] = i;
		}
	}

	scanf("%lld", &n);

	for(ll i = 1; i <= n; i++) {
		scanf("%lld", &x);
		printf("%lld\n", ans[x]);
	}

	return 0;
}