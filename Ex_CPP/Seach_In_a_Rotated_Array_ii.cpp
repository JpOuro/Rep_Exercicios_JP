/* https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/1823617415/ */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size() - 1;
        while (L <= R) {
            int M = L + (R - L) / 2;
            if (nums[M] == target) {
                return true;
            }
            if (nums[L] == nums[M] && nums[M] == nums[R]) {
                L++;
                R--;
                continue;
            }
            if (nums[L] <= nums[M]) {
                if (nums[L] <= target && nums[M] > target) {
                    R = M - 1;
                }
                else {
                    L = M + 1;
                }
            }
            else {
                if (nums[R] >= target && nums[M] < target) {
                    L = M + 1;
                }
                else {
                    R = M - 1;
                }
            }
        }
        return false;
    }
};