/* https://leetcode.com/problems/find-missing-elements/     Beats: 100 - 99*/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector <int> v_ans;
        sort(nums.begin(), nums.end());
        int j = 0;
        for (int i = nums[0]; i < nums[nums.size() - 1]; i++) {
            if (nums[j] == i) {
                j++;
            }
            else {
                v_ans.push_back(i);
            }
        }
        return v_ans;
    }
};