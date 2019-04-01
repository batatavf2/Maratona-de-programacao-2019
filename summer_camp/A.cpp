#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> v) {
	int s = 0, ans = 0;

	int t = v.size();

	for(int i = 0; i < t; i++) {
		s += v[i];
		if(s >= ans)
			ans = s;
		else if(s < 0)
			s = 0;
	}
	return ans;
}

int main() {
	int x;
	char p;
	while(scanf("%d%c", &x, &p) != EOF) {
		vector<int> v;
		v.push_back(x);
		while(p != '\n') {
			scanf("%d%c", &x, &p);
			v.push_back(x);
		}
		printf("%d\n", kadane(v));
	}


	return 0;
}