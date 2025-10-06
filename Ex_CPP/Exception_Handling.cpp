/* https://atcoder.jp/contests/abc134/tasks/abc134_c */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int N;
    cin >> N;
    vector <long long int> v_og;
    vector <long long int> v_comp;
    for (int i = 0; i < N; i++) {
        long long int a;
        cin >> a;
        v_og.push_back(a);
        v_comp.push_back(a);
    }
    sort(v_comp.begin(), v_comp.end());
    for (int i = 0; i < N; i++){
        cout << "\n";
        if (v_og[i] == v_comp[N-1]) {
            cout << v_comp[N-2];
        }
        else {
            cout << v_comp[N-1];
        }
    }
    
    return 0;
}