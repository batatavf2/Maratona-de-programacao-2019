#include <bits/stdc++.h>

using namespace std;

int main() {
	double r, x, n, R;
	scanf("%lf %lf", &n, &R);

	x = 3.1415926535/n;

	r = R*sin(x)/(1-sin(x));

	printf("%.7lf\n", r);
	return 0;
}
