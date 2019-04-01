#include <bits/stdc++.h>

using namespace std;

long long int v[200005], n;

long long int bs(long long int a) {
	long long int l = 1, r = n;
	long long int mid, ans = -1;

	while(l <= r) {

		mid = (l+r)/2;

		if(v[mid] == a) {
			return mid;
		}
		else if(v[mid] < a) {
			l = mid+1;
		}
		else {
			r = mid-1;
		}
	}
	return l <= n ? l-1 : -1;
}

int main() {
	long long int w, x, s = 0, arrows;
	scanf("%lld", &n);
	scanf("%lld", &arrows);

	for(long long int i = 1; i <= n; i++) {
		scanf("%lld", &x);
		v[i] = v[i-1] + x;
	}


	for(long long int i = 1; i <= arrows; i++) {
		scanf("%lld", &w);
		s += w;
		// printf("s: %lld\n", s);
		if(bs(s) == -1 || n - bs(s) == 0) {
			printf("%lld\n", n);
			s = 0;
		}

		else {
			printf("%lld\n", n - bs(s));
		}
	}



	return 0;
}
