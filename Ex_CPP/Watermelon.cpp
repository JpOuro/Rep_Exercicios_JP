/* https://codeforces.com/problemset/problem/4/A  */

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int w;
    cin >> w;
    if (w % 2 == 0) {
        if (w == 2) {
            cout << "NO";
        }
        else {
        cout << "YES";
        }
    }
    else {
        cout << "NO";
    }
return 0;
}