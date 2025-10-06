/* https://cses.fi/problemset/task/1068 */

#include <bits/stdc++.h>
using namespace std ;

void collatz(long long int x) {
    if (x == 1) {
        cout << 1 << "\n";
        return;
    }
    else if (x % 2 == 0) {
        cout << x << "\n";
        x = x/2;
        collatz(x);
    }
    else if (x % 2 == 1) {
        cout << x << "\n";
        x = 3*x + 1;
        collatz(x);
    }
}


int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int N;
    cin >> N;
    collatz(N);
    
    return 0;
}