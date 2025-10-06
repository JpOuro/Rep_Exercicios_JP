/* https://cses.fi/problemset/task/1083 */

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long int n, num;
    cin >> n;
    long int matriz[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = 0;
    }
    long int N = n - 1;
    while (N--) {
        cin >> num;
        matriz[num - 1] = num;
    }
    for (int i = 0; i < n; i++) {
        if (matriz[i] == 0) {
            cout << i + 1;
            break;
        }
    }
return 0;
}