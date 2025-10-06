/* https://www.hackerrank.com/challenges/flipping-bits/problem */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        long long int a;
        cin >> a;
        a = pow(2,32) - a - 1;
        cout << a << "\n";
    }
    return 0;
}
