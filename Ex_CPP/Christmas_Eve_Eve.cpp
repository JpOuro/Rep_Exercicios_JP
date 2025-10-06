/*https://atcoder.jp/contests/abc115/tasks/abc115_b*/

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, mp = 0, p, total = 0;
    cin >> N;
    int carrin[N];
    while (N--) {
        cin >> p;
        if (mp < p) {
            mp = p;
        }
        total = total + p;
    }
    total = total - mp/2;
    cout << total;
return 0;
}