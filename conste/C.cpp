#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v;
	int n, k, x;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf("%d", &x);
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	scanf("%d", &k);

	for(int i = 1; i <= k; i++) {
		scanf("%d", &x);
		printf("%d\n", upper_bound(v.begin(), v.end(), x) - v.begin());
	}

	return 0;
}