/* https://leetcode.com/problems/contains-duplicate/submissions/1815303464/ */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return false;
        }
        sort(nums.begin(), nums.end());
        n--;
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};