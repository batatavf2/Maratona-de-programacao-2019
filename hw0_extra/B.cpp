#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[105], s=0, m=0, n, ones = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	for(int i = 0; i < n; i++) {
		if(v[i] == 0) {
			s++;
			if(s > m)
				m = s;
		}
		else {
			ones++;
			s--;
			if(s < 0)
				s = 0;
		}
	}
	if(ones == n)
		printf("%d\n", n-1);
	else
		printf("%d\n", m+ones);

	return 0;
}