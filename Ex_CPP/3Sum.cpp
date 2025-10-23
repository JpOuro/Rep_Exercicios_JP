/* https://leetcode.com/problems/3sum/submissions/1809459929/ */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <vector<int>> v_ans;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    v_ans.push_back({nums[i], nums[j], nums[k]});
                    while (k > 0 && nums[k] == nums[k-1]) {
                        k--;
                    }
                    while (j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                    j++;
                    k--;
                }
                else if (sum > 0) {
                    k--;
                }
                else if (sum < 0) {
                    j++;
                }
            }
        }
        return v_ans;
    }
};