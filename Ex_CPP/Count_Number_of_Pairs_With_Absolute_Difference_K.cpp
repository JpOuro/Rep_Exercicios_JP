/* https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/submissions/1805124980/ */

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        if (nums.size() < 2) {
            return 0;
        }
        int i = 0;
        int n = nums.size();
        int c = 0;
        while (i < n - 1) {
            int j = i + 1;
            while (j < n) {
                if (abs(nums[j] - nums[i]) == k) {
                    c++;
                }
                j++;
            }
            i++;
        }
        return c;
    }
};