#include <bits/stdc++.h>
#define pii pair<int, int>
#define st first
#define nd second
using namespace std;

map<pii, int> points;
map<int, pii> pMap;


int main() {
	int n, c = 0;
	pii x;
	

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d %d", &x.st, &x.nd);
		pMap[i] = x;
		x.st *= 2;
		x.nd *= 2;
		points[x] = 1;
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(i != j) {
				x.st = pMap[i].st + pMap[j].st;
				x.nd = pMap[i].nd + pMap[j].nd;
				if(points[x] > 0)
					c++;
			}
		}
	}

	printf("%d\n", c/2);
}