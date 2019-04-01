#include <bits/stdc++.h>

using namespace std;

int len, hei, x, y, n;
char op;

int main() {


	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf(" %c %d %d", &op, &x, &y);
		if(op == '+') {
			len = max(len, max(x, y));
			hei = max(hei, min(x, y));
			// printf(" -> %d %d\n", len, hei);
		}
		else {
			// printf(" -> %d %d\n", len, hei);
			if(len <= max(x, y) && hei <= min(x, y))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}


	return 0;
}