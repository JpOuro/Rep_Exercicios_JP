/* https://cses.fi/problemset/task/1646 */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    long long int n, q, a, b, c = 0;
    cin >> n >> q;
    long long int a_nums[n], a_sum[n];
    for (int i = 0; i < n; i++) {
        cin >> a_nums[i];
    }
    for (long long int i = 0; i < n; i++) {
        c += a_nums[i];
        a_sum[i] = c;
    }
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        if (a-2 < 0) {
            cout << a_sum[b-1] << "\n";
        }
        else {
            cout << (a_sum[b-1] - a_sum[a-2]) << "\n";
        }
    }
    
    return 0;
}