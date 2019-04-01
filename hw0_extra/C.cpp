#include <bits/stdc++.h>

using namespace std;

typedef struct segmento {
	long long int l;
	long long int r;

}segmento;

segmento seg[300005];
vector<long long int> oc, od;

int main() {

	long long int n, i, dist;
	multiset<pair<long long int, long long int> > seg;
	pair<long long int, long long int> s;

	scanf("%lld", &n);

	for(i = 1; i <= n; i++) {
		scanf("%lld %lld", &s.first, &s.second);
		oc.push_back(s.first);
		od.push_back(s.second);
		seg.insert(s);
	}

	sort(oc.begin(), oc.end());
	sort(od.begin(), od.end());

	s = make_pair(*oc.rbegin(), *od.begin());


	// for(auto i : oc)
	// 	cout << i;
	// cout << endl;
	// for(auto i : od)
	// 	cout << i;
	// cout << endl << endl;
	// printf("%lld", *(oc.end()-2));
	// printf("%lld", *od.begin());	


	if(seg.count(s)) {
		dist = max((long long) 0, *(od.begin()+1) - *(oc.end()-2));
		// cout << *(od.begin()+1) << " - " << *(oc.end()-2) << endl;
	}
	else {
		dist = max((long long) 0, max(*(od.begin()+1) - *(oc.end()-1), *(od.begin()) - *(oc.end()-2)));
	}

	printf("%lld\n", dist);
	return 0;
}