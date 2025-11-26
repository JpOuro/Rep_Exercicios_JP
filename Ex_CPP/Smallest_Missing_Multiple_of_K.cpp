/* https://leetcode.com/problems/smallest-missing-multiple-of-k/description/   Beats: 26 - 76*/

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int A = k;
        set <int> s_div;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0) {
                s_div.insert(nums[i]);
            }
        }
        for (auto x : s_div) {
            if (x != A) {
                return A;
            }
            A += k;
        }
        return A;
    }
};