/* https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/submissions/1807175639/ */

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = n - 1;
        int i = 0;
        while (i < j) {
            if (nums[i] == (-1)*nums[j]) {
                return abs(nums[i]);
            }
            else if ((-1)*nums[i] < nums[j]) {
                j--;
            }
            else if ((-1)*nums[i] > nums[j]) {
                i++;
            }
        }
        return -1;
    }
};