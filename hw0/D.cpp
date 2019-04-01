#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[100005], used[100005], i, n, j, res[100005];
	queue <int> switches;

	scanf("%d", &n);

	memset(used, 0, sizeof(used));

	for(i = 1; i <= n; i++) {
		scanf("%d", &v[i]);
		used[v[i]]++;
	}

	for(i = 1; i <= n; i++) {
		if(used[i] == 0)
			switches.push(i);
	}

	memset(used, 0, sizeof(used));


	for(i = 1; i <= n; i++) {
		if(used[v[i]] == 0 && v[i] <= n) {
			used[v[i]] = 1;
			res[i] = v[i];
		}
		else {
			res[i] = switches.front();
			used[switches.front()] = 1;
			switches.pop();
		}
	}



	for(i = 1; i <= n; i++) {
		printf("%d ", res[i]);
	}
	printf("\n");

	return 0;
}
