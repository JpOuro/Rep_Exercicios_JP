/* https://atcoder.jp/contests/abc366/tasks/abc366_c */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int Q;
    cin >> Q;
    map <long long int, long long int> m_bolas;
    set <long long int> s_bolas;
    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        if (q == 1) {
            int x;
            cin >> x;
            m_bolas[x]++;
            if (m_bolas[x] == 1) {
                s_bolas.insert(x);
            }
        }
        else if (q == 2) {
            int x;
            cin >> x;
            m_bolas[x]--;
            if (m_bolas[x] == 0) {
                s_bolas.erase(x);
            }
        }
        else if (q == 3) {
            cout << s_bolas.size() << "\n";
        }
    }
    return 0;
}