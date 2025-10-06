/* https://codeforces.com/problemset/problem/1520/D */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int n, c = 0, a;
    cin >> n;
    while (n--) {
        map <long long int, long long int> m_rep;
        cin >> a;
        for (int i = 0; i < a; i++) {
            long long int vetor[a];
            cin >> vetor[i];
            vetor[i] -= i;
            m_rep[vetor[i]]++;
        }
        for (auto i = m_rep.begin(); i != m_rep.end(); i++) {
            if (i->second > 1) {
                long long int b = i->second - 1;
                c+= (i->second*b)/2;
            }
        }
        cout << c << "\n";
        c = 0;
    }
    return 0;
}
