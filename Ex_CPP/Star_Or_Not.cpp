/* https://atcoder.jp/contests/abc225/tasks/abc225_b */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    int f1 = 0;
    long long int a, b, n, r, A, B;
    cin >> n;
    cin >> a >> b;
    cin >> A >> B;
    if (A == a || A == b) {
        r = A;
    }
    else if (B == a || B == b) {
        r = B;
    }
    else {
        cout << "No";
        return 0;
    }
    for (int i = 2; i < n-1; i++) {
        cin >> A >> B;
        if (A != r && B != r) {
            f1 = 1;
            cout << "No";
            break;
        }
    }
    if (f1 == 0) {
        cout << "Yes";
    }
    
    return 0;
}