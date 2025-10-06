/* https://codeforces.com/problemset/problem/706/B */

#include <bits/stdc++.h>
using namespace std;
int f1 = 0;

int main ( )
{
	ios::sync_with_stdio ( false ) ;
	cin.tie(NULL) ;
	long long int n;
	cin >> n;
	long long int a_prices[n];
	for (long long int i = 0; i < n; i++) {
		cin >> a_prices[i];
	}
	sort(a_prices, a_prices + n);
	long long int q;
	cin >> q;
	long long int a_money[q];
	for (long long int i = 0; i < q; i++) {
		cin >> a_money[i];
	}
	for (int i = 0; i < q; i++) {
		f1 = 0;
		long long int l = 0, t = a_money[i], h = n - 1, m;
		while (l <= h) {
			m = l + (h - l) / 2;
			if (a_prices[m] <= t) {
				if (a_prices[m+1] > t || m + 1 == n) {
				    f1 = 1;
					cout << m + 1 << "\n";
					break;
				}
				else {
					l = m + 1;
				}
			}
			else {
				h = m - 1;
			}
		}
		if (f1 == 0) {
			cout << 0 << "\n";
		}
	}
	return 0;
}