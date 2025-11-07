/* https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1823647816/ */

/* ou https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1823647392/ */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int L = 0;
        int R = nums.size() - 1;
        if (nums[R] > nums[L]) {
            return nums[L];
        }
        while (L <= R) {
            int M = L + (R - L) / 2;
            if (nums[M] <= nums[(M+1) % nums.size()] && nums[M] <= nums[(M-1 + nums.size()) % nums.size()]) {
                return nums[M];
            }
            if (nums[M] > nums[R]) {
                L = M + 1;
            }
            else {
                R = M - 1;
            }
        }
        return 0;
    }
};