/* https://cses.fi/problemset/task/1074 */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector <long long> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    long long int dif = 0, m = n/2;
    for (int i = 0; i < n; i++){
        dif += abs(s[i] - s[m]);
    }
    cout << dif;
    return 0;
}
