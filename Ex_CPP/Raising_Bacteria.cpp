/* https://codeforces.com/problemset/problem/579/A */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
	ios::sync_with_stdio (false);
	cin.tie(NULL);
	long long int x, c = 0;
	cin >> x;
	while (x) {
		c += x & 1;
		x >>= 1;
	}
    cout << c;
	return 0;
}
