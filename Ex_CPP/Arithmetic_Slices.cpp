/* https://leetcode.com/problems/arithmetic-slices/submissions/1828710723/ */

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if (nums.size() < 3) {
            return 0;
        }
        int ans = 0;
        int c = 0;
        for (int i = 1; i < nums.size() - 1; i++) {
            if ((nums[i - 1] - nums[i]) != (nums[i] - nums[i + 1])) {
                if (c >= 1) {
                    ans += c*(c+1)/2;
                }
                c = 0;
            }
            else {
                c++;
            }
        }
        ans += c*(c+1)/2;
        return ans;
    }
};