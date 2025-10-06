/* https://atcoder.jp/contests/abc073/tasks/abc073_b */

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long int n, total = 0, l, r;
    cin >> n;
    while (n--) {
        cin >> l >> r;
        r = r + 1 - l;
        total = total + r;
    }
    cout << total;
return 0;
}