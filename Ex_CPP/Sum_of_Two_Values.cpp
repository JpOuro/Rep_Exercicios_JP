/* https://cses.fi/problemset/task/1640 */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    long long int n, sum = 0, k;
    cin >> n >> k;
    long long int l = 0, r = n - 1;
    long long int a_nums[n], a_mirror[n];
    for (int i = 0; i < n; i++) {
        cin >> a_nums[i];
        a_mirror[i] = a_nums[i];
    }
    sort(a_mirror, a_mirror + n);
    while (l < r && sum != k) {
        sum = 0;
        sum = a_mirror[l] + a_mirror[r];
        if (sum > k) {
            r -= 1;
        }
        else if (sum < k) {
            l += 1;
        }
    }
    if (sum == k) {
        int e = 0;
        for (int i = 0; i < n; i++) {
            if (a_nums[i] == a_mirror[l]) {
                cout << i + 1 << " ";
                break;
            }
        }
        for (int j = n; j > -1; j--) {
            if (a_nums[j] == a_mirror[r]) {
                cout << j + 1 << " ";
                break;
            }
        }
    }
    else {
        cout << "IMPOSSIBLE";
    }
    
    return 0;
}