#include <bits/stdc++.h>

using namespace std;

void printAns(vector<int> v) {
	int t = v.size();
	printf("%d", t);
	for(int e : v)
		printf(" %d", e);
	printf("\n");
}


int main() {
	vector<int> a1, a2, a3;
	queue<int> p, n;
	int m, x;
	bool neg = false;

	scanf("%d", &m);

	for(int i = 1; i <= m; i++) {
		scanf("%d", &x);
		if(x == 0)
			a3.push_back(0);
		else if(x < 0)
			n.push(x);
		else
			p.push(x);
	}

	while(!p.empty()) {
		a1.push_back(p.front());
		p.pop();
	}

	a2.push_back(n.front());
	n.pop();

	if(a1.size() == 0) {
		a1.push_back(n.front());
		n.pop();
		a1.push_back(n.front());
		n.pop();
	}

	while(!n.empty()) {
		a3.push_back(n.front());
		n.pop();
	}


	printAns(a2);
	printAns(a1);
	printAns(a3);


	return 0;
}