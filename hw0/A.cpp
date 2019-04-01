#include <bits/stdc++.h>

using namespace std;

bool isValid(int x) {
	int v[10], aux;
	memset(v, 0, sizeof(v));

	while(x > 0) {
		aux = x%10;
		if(v[aux] != 0) {
			return false;
		}
		else {
			v[aux] = 1;
			x = (x-aux)/10;
		}
	}
	return true;
}

int count(int x, int y) {
	int c = 0;
	while(x <= y) {
		if(isValid(x)) {
			c++;
		}
		x++;
	}
	return c;
}


int main() {
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", count(a, b));
	}

	return 0;
}