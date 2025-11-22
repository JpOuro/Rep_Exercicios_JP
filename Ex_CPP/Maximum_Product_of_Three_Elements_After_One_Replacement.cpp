/* https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/  Beats: 85 - 95*/

class Solution {
public:
    long long maxProduct(vector<int>& nums) { 
        long long A = 0;
        int B = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (A < abs(nums[i])) {
                B = A;
                A = abs(nums[i]);
            }
            else {
                if (B < abs(nums[i])) {
                    B = abs(nums[i]);
                }
            }
        }
        A = pow(10, 5) * A * B;
        return A;
    }
};