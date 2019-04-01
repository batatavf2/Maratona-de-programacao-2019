#include <bits/stdc++.h>
#define db(x) cerr << #x << ": " << x << endl;

using namespace std;

int pieces[4005];


int main() {
	int n, p[4];

	scanf("%d %d %d %d", &n, &p[1], &p[2], &p[3]);

	for(int i = 1; i <= 3; i++) {
		pieces[p[i]] = 1;
	}

	for(int i = 0; i <= n; i++) {
		for(int j = 1; j <= 3; j++) {
			if(pieces[i] > 0 && i+p[j] <= n && pieces[i+p[j]] <= pieces[i])
				pieces[i+p[j]] = pieces[i] + 1;
		}
	}

	printf("%d\n", pieces[n]);
	return 0;

}