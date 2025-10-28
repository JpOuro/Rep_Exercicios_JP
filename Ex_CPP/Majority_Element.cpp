/* https://leetcode.com/problems/majority-element/submissions/1813453365/ */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 0;
        int i;
        int a;
        int C = 0;
        int n = nums.size();
        for (i = 1; i < n; i++) {
            if (nums[j] != nums[i] && i - j > C) {
                C = i - j;
                a = nums[j];
                j = i;
            }
        }
        if (i - j > C) {
            return nums[j];
        }
        return a;
    }
};