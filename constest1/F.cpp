#include <bits/stdc++.h>

using namespace std;

char n[100005];
bool ok = false;

int main() {

	scanf("%s", n);
	int t = strlen(n);
	for(int i = 0; i < t-1; i++) {
		if(n[i] != '0')
			printf("%c", n[i]);
		else {
			if(ok == true)
				printf("%c", n[i]);
			else
				ok = true;
		}
	}

	if(ok == true)
		printf("%c", n[t-1]);

	printf("\n");
	return 0;
}