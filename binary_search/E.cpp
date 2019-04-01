#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, s = 0, x, c = 0;
	queue<long long int> p;
	bool t = true;

	vector<pair<long long int, long long int> > v;

	scanf("%lld", &n);

	for(long long int i = 1; i <= n; i++) {
		scanf("%lld", &x);
		s += x; 
		v.push_back({x, i});
	}

	sort(v.begin(), v.end());

	// for(auto e : v)
	// 	printf(" %lld", e.first);
	// printf("\n");

	auto last = *v.rbegin();
	auto plast = *(v.end()-2);

	for(auto e : v) {
		if(s - e.first == 2*(last.first) && e != last) {
			c++;
			p.push(e.second);
		}
	}

	if(s - last.first == 2*(plast.first)) {
		c++;
		p.push(last.second);
	}

	printf("%lld\n", c);

	while(!p.empty()) {
		printf("%lld ", p.front());
		p.pop();
	}

	printf("\n");

	return 0;
}