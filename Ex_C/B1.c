#include <stdio.h>

int main()
{
	long long int N, Q;
	scanf("%lld %lld", &N, &Q);
	long long int a_nums[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a_nums[i]);
	}
	while (Q--) {
    	long long int x;
    	scanf("%lld", &x);
    	int L = 0;
    	int R = N - 1;
    	int F = 0;
		while (L <= R) {
			int M = L + (R - L) / 2;
			if (a_nums[M] == x) {
				printf("1\n");
				F = 1;
				break;
			}
			else if (a_nums[M] > x) {
				R = M - 1;
			}
			else {
				L = M + 1;
			}
		}
		if (F == 0) {
    		printf("0\n");
		}
	}
	return 0;
}