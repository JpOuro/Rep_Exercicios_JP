/* https://codeforces.com/problemset/problem/318/A*/

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k;
    cin >> n >> k;
    if (k <= (n+1)/2) {
        cout << 2*k - 1;
    }
    else if (k > (n+1)/2) {
        long long int r = (n+1)/2;
        cout << 2*(k-r);
    }
    
return 0;
}