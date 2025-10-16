/* https://leetcode.com/problems/sqrtx/submissions/1803585057/ */

class Solution {
public:
    int mySqrt(int x) {
        long long int L = 0;
        long long int H = x;
        long long int M = L + (H - L) / 2;
        while (L <= H) {
            M = L + (H - L) / 2;
            if (M*M == x) {
                return M;
            }
            else if (M*M > x) {
                H = M - 1;
            }
            else {
                L = M + 1;
            }
        }
        if (M*M > x) {
            return M - 1;
        }
        return M;
    }
};