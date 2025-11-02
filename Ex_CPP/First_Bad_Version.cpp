/* https://leetcode.com/problems/first-bad-version/submissions/1818979377/ */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L = 1;
        int R = n;
        int M;
        while (L <= R) {
            M = L + (R - L) / 2;
            if (isBadVersion(M)) {
                R = M - 1;
            }
            else {
                L = M + 1;
            }
        }
        return L;
    }
};