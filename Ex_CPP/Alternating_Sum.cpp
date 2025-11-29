/* https://leetcode.com/problems/compute-alternating-sum/description/  Beats: 100 - 97*/

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int A = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                A += nums[i];
            }
            else {
                A -= nums[i];
            }
        }
        return A;
    }
};