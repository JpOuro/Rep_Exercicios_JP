#include <stdio.h>

int main()
{
    long long int L = 1000000001;
    long long int R = -1;
	long long int N;
	long long int MIN = 9223372036854775807;
	scanf("%lld", &N);
	long long int a_nums[N];
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a_nums[i]);
		if (a_nums[i] < L) {
		    L = a_nums[i];
		}
		if (a_nums[i] > R) {
		    R = a_nums[i];
		}
	}
	while (L <= R) {
	    long long int M1 = L + (R - L) / 3;
	    long long int M2 = R - (R - L) / 3;
	    long long int S1 = 0;
	    long long int S2 = 0;
	    for (int i = 0; i < N; i++) {
	        if (M1 - a_nums[i] < 0) {
	            S1 += (-1)*(M1 - a_nums[i]);
	        }
	        else {
	            S1 += (M1 - a_nums[i]);
	        }
	        if (M2 - a_nums[i] < 0) {
	            S2 += (-1)*(M2 - a_nums[i]);
	        }
	        else {
	            S2 += (M2 - a_nums[i]);
	        }
	    }
	    if (S1 < MIN) {
	        MIN = S1;
	    }
	    if (S2 < MIN) {
	        MIN = S2;
	    }
	    if (S1 == S2) {
	        L = M1 + 1;
	        R = M2 - 1;
	    }
	    else if (S1 < S2) {
	        R = M2 - 1;
	    }
	    else {
	        L = M1 + 1;
	    }
	}
	printf("%lld", MIN);
	return 0;
}