/* https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/submissions/1807558407/ */

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int c = 0;
        while (i < j) {
            if (nums[i] + nums[j] >= target) {
                j--;
            }
            else {
                c += j - i;
                i++;
            }
        }
        return c;
    }
};