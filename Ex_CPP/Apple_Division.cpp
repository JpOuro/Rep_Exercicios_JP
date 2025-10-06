/* https://cses.fi/problemset/task/1623 */

#include <bits/stdc++.h>
#include <climits>
using namespace std;
long long int D = 9223372036854775807, G1 = 0, G2 = 0, d = 0;

void Appler(int x, int y, long long int arr[], long long int G1, long long int G2) {
    if (x == y) {
        d = abs(G1 - G2);
        if (d < D) {
            D = d;
        }
        return;
    }
    G1 += arr[x];
    Appler(x+1, y, arr, G1, G2);
    G1 -= arr[x];
    G2 += arr[x];
    Appler(x+1, y, arr, G1, G2);
    G2 -= arr[x];
}


int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    int N;
    cin >> N;
    long long int apples[N];
    for (int i = 0; i < N; i++) {
        cin >> apples[i];
    }
    Appler(0, N, apples, G1, G2);
    cout << D;
    return 0;
}