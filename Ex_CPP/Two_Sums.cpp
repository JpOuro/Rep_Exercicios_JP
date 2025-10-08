/*https://leetcode.com/problems/two-sum/description/*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b, A, B, c, d;
        vector<int> v_mirror;
        vector<int> v_solution;
        for (auto i : nums) {
            v_mirror.push_back(i);
        }
        sort(nums.begin(), nums.end());
        a = 0;
        b = nums.size() - 1;
        for (int i = 0; i < nums.size() - 1; i++){
            A = nums[a];
            B = nums[b];
            if (A + B == target) {
                for (int j = 0; j < v_mirror.size(); j++) {
                    if (v_mirror[j] == A) {
                        c = j;
                        break;
                    }
                }
                for (int j = 0; j < v_mirror.size(); j++) {
                    if (v_mirror[j] == B && j != c) {
                        d = j;
                        break;
                    }
                }
                return {c, d};
            }
            else if (A + B < target) {
                a++;
            }
            else if (A + B > target) {
                b--;
            }
        }
        return {};
    }
};