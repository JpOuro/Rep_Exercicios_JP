/* https://leetcode.com/problems/maximum-average-subarray-i/submissions/1826242436/ */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int L = 0;
        double S = 0;
        for (int i = 0; i < k; i++) {
            S += nums[i];
        }
        double M = S / k;
        for (int i = k; i < nums.size(); i++) {
            S -= nums[L];
            L++;
            S += nums[i];
            M = max(M, S / k);
        }
        return M;
    }
};