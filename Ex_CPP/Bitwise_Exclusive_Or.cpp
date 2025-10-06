/* https://atcoder.jp/contests/abc213/tasks/abc213_a */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    a = a ^ b;
    cout << a;
    return 0;
}