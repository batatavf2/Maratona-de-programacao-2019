#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

	int n, m = 0, bm;
	string a;

	multiset<string> line;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		cin >> a;
		// cout << a << endl;
		line.insert(a);
	}

	for(auto i : line) {
		if(line.count(i) > m)
			m = line.count(i);
	}

	printf("%d\n", m);

	return 0;
}