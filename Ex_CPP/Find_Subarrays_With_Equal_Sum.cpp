/* https://leetcode.com/problems/find-subarrays-with-equal-sum/submissions/1806998840/ */

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map <int, int> m_sum;
        int n = nums.size() - 1;
        for (int i = 0; i < n; i++) {
            int a = nums[i] + nums[i+1];
            m_sum[a]++;
            if (m_sum[a] > 1) {
                return true;
            }
        }
        return false;
    }
};