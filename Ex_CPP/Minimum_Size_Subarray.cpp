/* https://leetcode.com/problems/minimum-size-subarray-sum/submissions/1824118308/ */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int L = 0;
        int R = 0;
        int A = pow(10, 5) + 1;
        int S = 0;
        while (1) {
            if (S >= target) {
                if ((R - L) < A) {
                    A = R - L;
                }
                S -= nums[L];
                L++;
            }
            else {
                if (R == nums.size()) {
                    break;
                }
                S += nums[R];
                R++;
            }
        }
        if (A == pow(10, 5) + 1) {
            return 0;
        }
        return A;   
    }
};