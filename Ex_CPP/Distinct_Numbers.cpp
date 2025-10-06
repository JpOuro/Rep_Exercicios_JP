/* https://cses.fi/problemset/task/1621 */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set <int> lista;
    while (n--) {
        int a;
        cin >> a;
        lista.insert (a);
    }
    cout << lista.size(); 
    return 0;
}
