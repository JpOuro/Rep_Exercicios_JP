/* https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1820492400/ */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return {-1, -1};
        }
        int L = 0;
        int R = nums.size() - 1;
        int M;
        int S;
        while (L <= R) {
            M = L + (R - L) / 2;
            if (nums[M] == target) {
                if ((M == 0) || (M > 0 && nums[M-1] != nums[M])) {
                    S = M;
                    break;
                }
                R = M - 1;
            } 
            else if (nums[M] < target) {
                L = M + 1;
            } 
            else {
                R = M - 1;
            }
        }
        if (nums[M] != target) {
            return {-1, -1};
        }
        L = M;
        R = nums.size() - 1;
        while (L <= R) {
            int M = L + (R - L) / 2;
            if (nums[M] == target) {
                if ((M == nums.size() - 1) || ((M < nums.size() - 1) && (nums[M] != nums[M+1]))) {
                    return {S, M};
                }
                L = M + 1;
            } 
            else if (nums[M] < target) {
                L = M + 1;
            } 
            else {
                R = M - 1;
            }
        }
        return {-1, -1};
    }
};