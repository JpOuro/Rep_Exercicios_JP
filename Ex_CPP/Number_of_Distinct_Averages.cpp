/* https://leetcode.com/problems/number-of-distinct-averages/submissions/1807505815/ */

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set <int> s_counter;
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            s_counter.insert(nums[i]+nums[j]);
            i++;
            j--;
        }
        return s_counter.size();
    }
};