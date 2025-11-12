/* https://leetcode.com/problems/single-number/submissions/1827432071/ */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (int i = 0; i < nums.size(); i++) {
            a = a ^ nums[i];
        }
        return a;
    }
};