#include <bits/stdc++.h>

using namespace std;

int s, n, a, b, ms;

int main() {
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d%d", &a, &b);
		s -= a - b;
		if(s > ms)
			ms = s;
	}

	printf("%d\n", ms);

	return 0;
}