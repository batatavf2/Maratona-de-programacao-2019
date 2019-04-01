#include <bits/stdc++.h>
#define db(x) cerr << #x << " : " << x << endl;

using namespace std;

int main() {
	int i, n, m, aux, border = 1, c, j = 0;
	vector<int> riders, street, drivers;

	scanf("%d %d", &n, &m);

	for(i = 1; i <= n+m; i++) {
		scanf("%d", &aux);
		street.push_back(aux);
	}

	for(i = 0; i < n+m; i++) {
		scanf("%d", &aux);
		if(aux == 1)
			drivers.push_back(street[i]);
		else
			riders.push_back(street[i]);
	}

	for(i = 0; i < m-1; i++) {
		c = 0;

		// db(drivers[i]);
		// db(drivers[i+1]);

		border = (drivers[i+1]+drivers[i])/2;
		
		while(riders[j] <= border && j < n) {
			j++;
			c++;
		}
		printf("%d ", c);
	}
	printf("%d\n", n-j);

	return 0;
}