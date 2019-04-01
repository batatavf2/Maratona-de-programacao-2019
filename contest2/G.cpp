#include <bits/stdc++.h>
#define db(x) cerr << #x << ": " << x << endl;

using namespace std;

int main() {
	int n, ans[4] = {6, 8, 4, 2};
	scanf("%d", &n);
	if(n == 0)
		printf("1\n");
	else
		printf("%d\n", ans[n%4]);

	return 0;
}