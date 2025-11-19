#include <stdio.h>

int main()
{
    long long int L = 1;
    long long int R = -1;
	long long int N, P, S = 0, A = -1, M;
	scanf("%lld %lld", &N, &P);
	long long int a_nums[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a_nums[i]);
		if (a_nums[i] > R) {
		    R = a_nums[i];
		}
		S += a_nums[i];
	}
	if (S < P) {
	    printf("0");
	    return 0;
	}
	while (L <= R) {
	    M = L + (R - L) / 2;
	    S = 0;
	    for (int i = 0; i < N; i++) {
	        S += a_nums[i] / M;
	    }
	    if (S >= P) {
	        A = M;
	        L = M + 1;
	    }
	    else {
	        R = M - 1;
	    }
	}
	if (A != -1) {
    	printf("%lld", A);
	}
	else {
	    printf("%lld", M);
	}
	return 0;
}