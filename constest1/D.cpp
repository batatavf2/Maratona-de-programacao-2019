#include <bits/stdc++.h>
using namespace std;
int k, c[30], m, p;
char str[1005], ans[1005];
vector<char> v;
int main() {
	scanf("%d", &k);
	scanf(" %s", str);
	for(int i = 0; str[i] != '\0'; i++)	{
		c[str[i] - 'a'] += 1;
	}
	for(int i = 'a'; i <= 'z'; i++) {
		if(c[i - 'a'] % k != 0) {
			printf("-1\n");
			return 0;
		}
		else {
			for(int j = 1; j <= c[i-'a']/k; j++)
				v.push_back(i);
		}
	}
	int t = v.size();
	for(int i = 0; i < t; i++) {
		ans[i] = v[i];
	}
	ans[t] = '\0';

	for(int i = 1; i <= k; i++) {
		printf("%s", ans);
	}
	printf("\n");
	return 0;
}