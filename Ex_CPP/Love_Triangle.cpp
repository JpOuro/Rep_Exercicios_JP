/* https://codeforces.com/problemset/problem/939/A */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    int f1 = 0;
    long long int n;
    map<long long int, long long int> m_planes;
    cin >> n;
    for (long long int i = 1; i <= n; i++) {
        cin >> m_planes[i];
    }
    for (long long int i = 1; i <= n; i++) {
        if (m_planes[m_planes[m_planes[i]]] == i) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}