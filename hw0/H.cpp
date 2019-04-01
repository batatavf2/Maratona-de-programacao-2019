#include <bits/stdc++.h>

using namespace std;

int main() {
	int i, puzzles, students, pieces[55], diff = 0, minDiff = 99999999;

	scanf("%d %d", &students, &puzzles);

	for(i = 1; i <= puzzles; i++) {
		scanf("%d", &pieces[i]);
	}

	sort(pieces+1, pieces+puzzles+1);
	
	for(i = students; i <= puzzles; i++) {
		diff = pieces[i] - pieces[i - students + 1];
		if(minDiff > diff)
			minDiff = diff;
	}


	printf("%d\n", minDiff);
	return 0;
}