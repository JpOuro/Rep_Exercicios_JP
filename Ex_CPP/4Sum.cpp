/* https://leetcode.com/problems/4sum/submissions/1810377877/ */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <vector<int>> v_ans;
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j-1]) {
                    continue;
                }
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum = (long long)nums[i] + (long long) nums[j] + (long long) nums[k] + (long long) nums[l];
                    if (sum == target) {
                        v_ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k < l && nums[k] == nums[k+1]) {
                            k++;
                        }
                        while (l > 0 && nums[l] == nums[l-1]) {
                            l--;
                        }
                        k++;
                        l--;
                    }
                    else if (sum > target) {
                        l--;
                    }
                    else if (sum < target) {
                        k++;
                    }
                }
            }
        }
        return v_ans;
    }
};