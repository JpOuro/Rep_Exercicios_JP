/* https://leetcode.com/problems/longest-harmonious-subsequence/submissions/1826030120/ */

class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int L = 0;
        int R = 0;
        int M = -1;
        while (R < nums.size()) {
            if (nums[R] - nums[L] > 1) {
                L++;
                while (nums[L] == nums[L - 1]) {
                    L++;
                }
            }
            if (nums[R] - nums[L] == 1) {
                M = max(R - L, M);
            }
            R++;
        }
        return M + 1;
    }
};