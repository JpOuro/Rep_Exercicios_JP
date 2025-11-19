/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int Q;
    scanf("%lld", &Q);
    long long int a_matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lld", &a_matrix[i][j]);
        }
    }
    while (Q--) {
        long long int x;
        scanf("%lld", &x);
        int I = 0;
        int J = N - 1;
        int F = 0;
        while (I < N && J > -1) {
            if (a_matrix[I][J] == x) {
                F = 1;
                printf("1\n");
                break;
            }
            else if (a_matrix[I][J] > x) {
                J--;
            }
            else {
                I++;
            }
        }
        if (F == 0) {
            printf("0\n");
        }
    }
    return 0;
}