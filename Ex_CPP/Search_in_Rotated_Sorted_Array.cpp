/* https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1819936582/ */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size() - 1;
        while (L <= R) {
            int M = L + (R - L)/2;
            if (nums[M] == target) {
                return M;
            }
            else if (nums[M] >= nums[L]) {
                if (nums[M] >= target && nums[L] <= target) {
                    R = M - 1;
                }
                else {
                    L = M + 1;
                }
            }
            else {
                if (nums[M] <= target && nums[R] >= target) {
                    L = M + 1;
                }
                else {
                    R = M - 1;
                }
            }
        }
        return -1;
    }
};