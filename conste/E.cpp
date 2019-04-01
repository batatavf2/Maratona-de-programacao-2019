#include <bits/stdc++.h>

using namespace std;

int M[370], F[370], n, in, fi;
char s;
int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf(" %c %d %d", &s, &in, &fi);
		if(s == 'M') {
			M[in]++;
			M[fi+1]--;
		}
		else{
			F[in]++;
			F[fi+1]--;
		}
	}

	int f=0, m=0, ms=0;

	for(int i = 1; i <= 366; i++) {
		m += M[i];
		f += F[i];
		if (ms <= min(m, f)) {
			ms = min(m, f);
		}
	}

	printf("%d\n", 2*ms);
	return 0;
}