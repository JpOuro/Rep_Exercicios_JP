/* https://leetcode.com/problems/valid-perfect-square/submissions/1819897258/ */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int L = 1;
        int R = num;
        while (L <= R && L != R - 1) {
            long long int M = L + (R - L) /2;
            if (M*M == num) {
                return true;
            }
            else if (M*M < num) {
                L = M;
            }
            else {
                R = M;
            }
        }
        return false;
    }
};