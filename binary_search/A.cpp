#include <bits/stdc++.h>

using namespace std;

int bs(int a) {
	int l = 1, r = 100;
	int mid;

	while(l < r) {

		mid = (l+r)/2;
		if(mid*mid == a)
			return mid;
		else if(mid*mid < a) {
			l = mid+1;
		}
		else {
			r = mid-1;
		}
	}
	return r;
}

int main() {
	int n, x;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d", &x);
		printf("%d\n", bs(x));
	}

	return 0;
}