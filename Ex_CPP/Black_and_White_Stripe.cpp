/* https://codeforces.com/problemset/problem/1690/D */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
	ios::sync_with_stdio ( false ) ;
	cin.tie(NULL) ;
	long long int n, k, t, s = 0, L, R, menor = 2 * pow(10, 5) + 1, d;
	cin >> t;
	for (long long int i = 1; i <= t; i++) {
		cin >> n >> k;
		long long int a_sum[n + 1];
		a_sum[0] = 0;
		cin >> ws;
		string a_stripe;
		getline(cin, a_stripe);
		for (long long int j = 0; j < n; j++) {
			if (a_stripe[j] == 'B') {
				a_sum[j + 1] = s;
			}
			else {
				s += 1;
				a_sum[j + 1] = s;
			}
		}
		s = 0;
		L = 1;
		R = k;
		while (R <= n) {
			d = a_sum[R] - a_sum[L-1];
			if (d < menor) {
				menor = d;
			}
			R++;
			L++;
		}
		cout << menor << "\n";
		menor = 2* pow(10, 5) + 1;
	}
	return 0;
}