/* https://cses.fi/problemset/task/1650 */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    long long int n, q, a, b, c = 0;
    cin >> n >> q;
    long long int a_nums[n], a_xor[n+1];
    for (int i = 0; i < n; i++) {
        cin >> a_nums[i];
    }
    a_xor[0] = 0;
    for (long long int i = 0; i < n; i++) {
        c = a_nums[i]^c;
        a_xor[i+1] = c;
    }
    for (long long int i = 1; i < q+1; i++) {
        cin >> a >> b;
        cout << (a_xor[b]^a_xor[a-1]) << "\n";
    }
    return 0;
}