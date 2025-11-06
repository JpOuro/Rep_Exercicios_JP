/* https://cses.fi/problemset/task/3217 */

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v_matrix(n, vector<int>(n, -1));
    v_matrix[0][0] = 0;
    queue<vector<int>> q_order;
    q_order.push({0, 0});
    int F[] = {1, 1, 2, 2, -1, -1, -2, -2};
    int S[] = {2, -2, 1, -1, 2, -2, 1, -1};
    
    while (!(q_order.empty())) {
        int a = q_order.front()[0];
        int b = q_order.front()[1];
        q_order.pop();
        for (int j = 0; j < 8; j++) {
            int x = a + F[j];
            int y = b + S[j];
            if (x < n && x >= 0 && y < n && y >= 0 && v_matrix[x][y] == -1) {
                v_matrix[x][y] = v_matrix[a][b] + 1;
                q_order.push({x, y});
            }
        }
    }
        for (int d = 0; d < n; d++) {
            for (int e = 0; e < n; e++) {
                cout << v_matrix[d][e] << " ";
            }
            cout << "\n";
        }
    return 0;
}