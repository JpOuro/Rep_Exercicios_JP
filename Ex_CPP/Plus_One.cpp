/* https://leetcode.com/problems/plus-one/submissions/1803330154/https://leetcode.com/problems/plus-one/submissions/1803330154/ */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i > -1; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
                continue;
            }
            digits[i]++;
            return digits;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};