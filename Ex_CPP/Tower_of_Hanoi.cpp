/* https://cses.fi/problemset/task/2165 */

#include <bits/stdc++.h>
using namespace std ;

void hanoi(int x, int T1, int T2, int T3) {
    if (x == 0) {
        return;
    }
    hanoi(x-1, T1, T3, T2);
    cout << T1 << " " << T2 << "\n";
    hanoi(x-1, T3, T2, T1);
}


int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    int N;
    cin >> N;
    cout << (pow(2, N) - 1) << "\n";
    hanoi(N, 1, 3, 2);
    
    return 0;
}