#include <bits/stdc++.h>

using namespace std;

void findNextRotationOptions(vector <bool> v, int n) {
	int i, degrees;

	if(n > 0) {
		scanf("%d", &degrees);
	
		vector <bool> next(360);
		// printf("\n");
		for(i = 0; i <= 359; i++) {
			if(v[i]) {
				// printf("%d %d - ", (i+degrees)%360, (i-degrees+360)%360);
				next[(i+degrees)%360] = true;
				next[(i-degrees+360)%360] = true;
			}
		}
		// printf("\n");

		findNextRotationOptions(next, n-1);
	}
	else {
		v[0] ? printf("YES\n") : printf("NO\n");
	}
}


int main() {
	int i, n, deg;
	vector <bool> v(360);

	v[0] = true;

	scanf("%d", &n);

	findNextRotationOptions(v, n);
	
	return 0;
}