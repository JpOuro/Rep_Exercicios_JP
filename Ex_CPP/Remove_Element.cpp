/* https://leetcode.com/problems/remove-element/submissions/1800341676/ */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[j] = nums[i];
            if (nums[i] != val) {
                j++;
            }
        }
        return j;
    }
};