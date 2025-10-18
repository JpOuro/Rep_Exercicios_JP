/* https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/submissions/1805224765/ */

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector <int> v_jkeys;
        vector <int> v_res;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                v_jkeys.push_back(i);
            }
        }
        int m = v_jkeys.size();
        int j = max(v_jkeys[0] - k, 0);
        for (int i = 0; i < m; i++) {
            int max = min(v_jkeys[i] + k, n-1);
            if (j < v_jkeys[i] - k) {
                j = v_jkeys[i] - k;
            }
            while (j <= max) {
                v_res.push_back(j);
                j++;
            }
        }
        return v_res;
    }
};