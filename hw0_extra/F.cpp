#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int h, n, l, r, c = 0, dir = 0, mid, p=0;

	scanf("%lld %lld", &h, &n);
	l = 1;
	r = 1ll<<h;
	
	while(l != r) {
		c++;
		mid = (l+r)/2;
		if(dir == 0) {

			if(n <= mid){
				r = mid;
			}

			else {
				c += (1ll<<(h-p))-1;
				l = mid+1;
				dir = 1-dir;
			}
		}

		else if(dir == 1) {

			if(n <= mid){
				r = mid;
				c += (1ll<<(h-p))-1;
				dir = 1-dir;
			}

			else {
				l = mid+1;
			}
		}
		p++;
		dir = 1 - dir;
		// printf("%lld %lld, %lld\n", l, r, c);
	}

	printf("%lld\n", c);
	return 0;
}