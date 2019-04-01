#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[1005], a, b, i, pieces, ropes, s = 0;

	scanf("%d %d", &pieces, &ropes);

	for(i = 1; i <= pieces; i++) {
		scanf("%d", &v[i]);
	}

	for(i = 1; i <= ropes; i++) {
		scanf("%d %d", &a, &b);
		s += min(v[a], v[b]);
	}
	printf("%d\n", s);
	return 0;
}