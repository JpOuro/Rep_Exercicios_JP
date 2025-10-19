/* https://leetcode.com/problems/number-of-arithmetic-triplets/submissions/1805951878/ */

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int c = 0;
        int n = nums.size();
        int m = diff + diff + 1;
        for (int i = 0; i < n; i++) {
            int f1 = 0;
            int d1 = nums[i] + diff;
            int d2 = d1 + diff;
            for (int j = i + 1; j < i + m; j++) {
                if (j >= n) {
                    break;
                }
                if (d1 == nums[j]) {
                    f1 = 1;
                    continue;
                }
                if (d2 == nums[j] && f1 == 1) {
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};