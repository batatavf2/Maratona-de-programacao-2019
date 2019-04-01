#include <bits/stdc++.h>

using namespace std;

int main() {

	int minPointer, hourPointer, minutes, angles[365], diff, test;

	memset(angles, 0, sizeof(angles));

	for(minutes = 0; minutes <= 720; minutes++) {
		minPointer = (6*minutes)%360;
		hourPointer = ((minutes/12)*6)%360;
		diff = max(minPointer, hourPointer) - min(minPointer, hourPointer);
		// diff = min(diff, 180-diff);
		angles[diff] = 1;
		angles[diff-180] = 1;
	}

	while(scanf("%d", &test) != EOF) {
		if(angles[test])
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;
}