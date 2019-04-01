#include <bits/stdc++.h>

using namespace std;

int main() {
	int lemons, apples, pears, key;

	scanf("%d %d %d", &lemons, &apples, &pears);

	key = min(lemons, min(apples/2, pears/4));
	printf("%d\n", key*7);

	return 0;
}