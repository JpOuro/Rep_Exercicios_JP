/* https://cses.fi/problemset/task/1643 */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    long long int n, S = 0, M = -pow(10, 9) - 1;
    cin >> n;
    long long int a_nums[n], a_sum[n];
    for (int i = 0; i < n; i++) {
        cin >> a_nums[i];
        S += a_nums[i];
        if (S > M) {
            M = S;
        }
        if (S < 0) {
            S = 0;
        }
    }
    cout << M;
    return 0;
}