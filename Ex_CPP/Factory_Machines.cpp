/* https://cses.fi/problemset/task/1620 */

#include <bits/stdc++.h>
using namespace std;
int main ( )
{
	ios::sync_with_stdio ( false ) ;
	cin.tie(NULL) ;
	long long int n, k, C, L, H, M;
	cin >> n >> k;
	long long int a_machines[n];
	for (long long int i = 0; i < n; i++) {
		cin >> a_machines[i];
	}
    L = 0;
    H = k*a_machines[n-1];
    
    while (L <= H) {
        long long int sum = 0;
        M = L + (H - L)/2;
        for (long long int i = 0; i < n; i++) {
            sum += (M / a_machines[i]);
        }
        if (sum >= k) {
            C = M;
            H = M - 1;
        }
        else {
            L = M + 1;
        }
    }
    cout << C;
	return 0;
}