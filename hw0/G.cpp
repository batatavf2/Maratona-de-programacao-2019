#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int people, teams, maxFriends, minFriends, minorGroup, majorGroup;

	scanf("%lld %lld", &people, &teams);

	maxFriends = ((people - teams + 1)*(people - teams))/2;

	minorGroup = people/teams;
	majorGroup = minorGroup+1;

	minFriends = (teams - people%teams)*(minorGroup*(minorGroup-1))/2 + (people%teams)*(majorGroup*(majorGroup-1))/2;

	printf("%lld %lld\n", minFriends, maxFriends);

	return 0;
}