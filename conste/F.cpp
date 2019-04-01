#include <bits/stdc++.h>

using namespace std;

int main() {

	int l = 0, r = 0, x, y, n;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		if(x < 0)
			l++;
		else
			r++;
	}

	if(l <= 1 || r <= 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}