/* https://leetcode.com/problems/contains-duplicate-ii/submissions/1815357923/ */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> um_freq;
        if (k == 0) {
            return false;
        }
        int n = nums.size();
        int i = 0;
        int j = 0;
        for (j = 0; j < k && j < n; j++) {
            if (um_freq[nums[j]] != 0) {
                return true;
            }
            um_freq[nums[j]]++;
        }
        for (j = k; j < n; j++) {
            if (um_freq[nums[j]] != 0) {
                return true;
            }
            um_freq[nums[i]]--;
            i++;
            um_freq[nums[j]]++;
        }
        return false;
    }
};