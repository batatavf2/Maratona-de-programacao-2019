#include <bits/stdc++.h>

using namespace std;

char p[100006];
int co[100006];

int main() {
	int n, a, b, c=0, t;
	scanf("%s", p);
	t = strlen(p);

	scanf("%d", &n);
	for(int j = 0; j < t; j++) {
		if(p[j] == p[j+1]) {
			c++;
		}
		co[j+1] = c;
	}
	


	for(int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", co[b-1] - co[a-1]);
	}

	return 0;
}