/* https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/description/  Beats: 100 - 78*/

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map <int, int> h_freq;
        for (int i = 0; i < nums.size(); i++) {
            h_freq[nums[i]]++;
        }
        int S = 0;
        for (auto x: h_freq) {
            if (x.second % k == 0) {
                S += x.first * x.second;
            }
        }
        return S;
    }
};