/* https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/submissions/1812329849/ */

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string, int> um_freq;
        int n = nums.size();
        int C = 0;
        for (int i = 0; i < n; i++) {
            um_freq[nums[i]]++;
        }
        int s = target.length();
        for (auto& head : um_freq) {
            if (target.find(head.first) == 0) {
                string tail = target.substr(head.first.length());
                if (tail == head.first) {
                    C += head.second * (head.second - 1);
                } 
                else {
                    C += um_freq[tail] * head.second;
                }
            }
        }
        return C;
    }
};