/* https://leetcode.com/problems/split-array-with-minimum-difference/submissions/1830001993/ */

class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int R = nums.size() - 1;
        int L = 0;
        long long int SL = 0;
        long long int SR = 0;
        while (R > 0 && nums[R] < nums[R-1]) {
            SR += nums[R];
            R--;
        }
        while (L < nums.size() - 1 && nums[L] < nums[L + 1]) {
            SL += nums[L];
            L++;
        }
        if (R != L) {
            if (R - L == 1) {
                return abs(SR - SL);
            }
            return -1;
        }
        return min(abs(SR - SL - nums[L]), abs(SR - SL + nums[L]));
    }
};