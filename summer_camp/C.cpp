#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k, c, b;

	while(scanf("%d %d", &n, &k) != EOF) {

		c = 0;
		b = n;
		while(c > 0 || b >= k) {
			n += c;
			b += c;
			c = 0;
			c += b/k;
			b = b%k;
		}
		
		printf("%d\n", n);
	}


	return 0;
}