/* https://leetcode.com/problems/subarray-product-less-than-k/submissions/1829717809 */

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int L = 0;
        int R = 0;
        int Ro = 0;
        int P = 1;
        int C = 0;
        while (R < nums.size() && L < nums.size()) {
            if (P == 0) {
                P = 1;
            }
            P = P * nums[R];
            if (P >= k) {
                C += (R - L + 1)*(R - L) / 2;
                if (Ro > L) {
                    C -= (Ro - L + 1)*(Ro - L) / 2;
                }
                while (P >= k && L < nums.size()) {
                    P = P / nums[L];
                    L++;
                }
                Ro = R;
            }
            R++;
        }
        if (R >= L) {
            C += (R - L + 1)*(R - L) / 2;
            if (Ro > L) {
                C -= (Ro - L + 1)*(Ro - L) / 2;
            }
        }
        return C;
    }
};