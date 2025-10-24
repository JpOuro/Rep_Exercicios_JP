/* https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1810393016/ */

class Solution{
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map <int, int> um_freq;
        int c = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            um_freq[nums[i]]++;
        }
        for (auto& num : um_freq) {
            int a = num.first;
            int b = num.second;
            int r = k - a;
            if (r == a) {
                c += b / 2;
            }
            else if (r > a && um_freq.count(r)) {
                c += min(b, um_freq[r]);
            }
        }
        return c;
    }
};