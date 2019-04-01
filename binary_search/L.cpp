#include <bits/stdc++.h>

#define N 500005

char str[N];
int po[N][2], ne[N][2], c, n, ans;


using namespace std;

int prop(void) {
	int c = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		str[i] == '(' ? c++ : c--; 
	}

	return c;
}

int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		scanf(" %s", str);
		c = prop();

		if(str[0] == ')')
		
		if(c > 0) {
			if(ne[c] > 0) {
				ne[c]--;
				ans++;
			}
			else
				po[c]++;
		}
		else if(c < 0) {
			c = -c;
			if(po[c] > 0) {
				po[c]--;
				ans++;
			}
			else
				ne[c]++;
		}
		else {
			if(po[0] == 0)
				po[0]++;
			else {
				po[0]--;
				ans++;
			}
		}
	}
	
	printf("%d\n", ans);

	return 0;
}