/* https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/submissions/1835946443/ */

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if (nums.size() < 3) {
            return -1;
        }
        unordered_map <int, int> um_freq;
        set <int> s_good;
        for (int i = 0; i < nums.size(); i++) {
            um_freq[nums[i]]++;
            if (um_freq[nums[i]] >= 3) {
                s_good.insert(nums[i]);
            }
        }
        if (s_good.empty()) {
            return -1;
        }
        int D = 200;
        for (auto x : s_good) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    for (int j = i + 1; j < nums.size(); j++) {
                        if (nums[j] == x) {
                            for (int k = j + 1; k < nums.size(); k++) {
                                if (nums[k] == x) {
                                    if (abs(i - j) + abs(i - k) + abs(j - k) < D) {
                                        D = abs(i - j) + abs(i - k) + abs(j - k);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    return D;
    }
};