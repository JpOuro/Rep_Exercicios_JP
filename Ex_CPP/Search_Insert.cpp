/* https://leetcode.com/problems/search-insert-position/submissions/1801567641/ */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size() - 1;
        while (L <= R) {
            int M = L + (R - L) / 2;
            if (nums[M] < target) {
                L = M + 1;
            }
            else if (nums[M] > target) {
                R = M - 1;
            }
            else if (nums[M] == target) {
                return M;
            }
        }
        return L;
    }
};