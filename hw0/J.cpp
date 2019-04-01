#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, damage, repair, hp, i, ohko = 0;

	scanf("%d %d %d", &n, &damage, &repair);

	for(i = 1; i <= n; i++) {
		scanf("%d", &hp);
		if(hp <= damage)
			ohko++;
	}

	if(damage > repair)
		printf("%d\n", n);

	else {
		printf("%d\n", ohko/2 + ohko%2);
	}

	return 0;
}