/* https://codeforces.com/problemset/problem/467/B */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int n, m, k, f = 0, a, c;
    cin >> n >> m >> k;
    long long int a_armies[m + 1];
    for (int i = 0; i < m + 1; i++) {
        cin >> a_armies[i];
    }

    for (int i = 0; i < m; i++) {
        c = 0;
        a = a_armies[m] ^ a_armies[i];
        while (a) {
            c += a & 1;
            a >>= 1;
        }
        if (c <= k) {
            f++;
        }
    }
    cout << f;
    return 0;
}
