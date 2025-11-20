/* https://leetcode.com/problems/maximize-expression-of-three-elements/submissions/1834697448/ */

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int A1 = -101;
        int A2 = -101;
        int B = 101;
        for (int i = 0; i < nums.size(); i++) {
            B = min(B, nums[i]);
            if (A1 < nums[i]) {
                A2 = A1;
                A1 = nums[i];
            }
            else {
                A2 = max(A2, nums[i]);
            }
        }
        return (A1 + A2 - B);
    }
};