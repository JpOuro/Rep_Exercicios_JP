/* https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/description/ */

/* Beats: 48 - 49*/

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if (nums.size() < 3) {
            return -1;
        }
        unordered_map <int, vector<int>> u_freq;
        set <int> s_good;
        for (int i = 0; i < nums.size(); i++) {
            u_freq[nums[i]].push_back(i);
            if (u_freq[nums[i]].size() >= 3) {
                s_good.insert(nums[i]);
            }
        }
        if (s_good.empty()) {
            return -1;
        }
        int D = 2e9;
        for (auto x : s_good) {
            for (int i = 0; i + 2 < u_freq[x].size(); i++) {
                D = min(D, (abs(u_freq[x][i] - u_freq[x][i + 1]) + abs(u_freq[x][i + 2] - u_freq[x][i]) + abs(u_freq[x][i + 2] - u_freq[x][i + 1])));
            }
        }
        return D;
    }
};