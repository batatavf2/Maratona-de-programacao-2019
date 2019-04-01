#include <bits/stdc++.h>

using namespace std;

int v[100005], n;

int bs(int a) {
	int l = 1, r = n;
	int mid;

	while(l < r) {

		mid = (l+r)/2;
		if(v[mid] == a)
			return mid;
		else if(v[mid] < a) {
			l = mid+1;
		}
		else {
			r = mid;
		}
	}
	return l;
}

int main() {
	int w, x;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d", &x);
		v[i] = v[i-1] + x;
	}

	scanf("%d", &w);

	for(int i = 1; i <= w; i++) {
		scanf("%d", &x);
		printf("%d\n", bs(x));
	}

	return 0;
}
