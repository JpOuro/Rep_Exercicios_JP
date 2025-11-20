/* https://leetcode.com/problems/minimum-string-length-after-balanced-removals/submissions/1834700326/ */

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int A = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                A++;
            }
            else {
                A--;
            }
        }
        return abs(A);
    }
};