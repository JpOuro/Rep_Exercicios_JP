/* https://leetcode.com/problems/integer-to-roman/submissions/1814182784/ */

#include <string>
class Solution {
public:
    string intToRoman(int num) {
        string ans;
        vector <pair<int, string>> v_table = {{1000, "M"}, {900, "CM"}, {500, "D"},
        {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},
        {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for (auto& x : v_table) {

            while (num >= x.first) {
                num -= x.first;
                ans += x.second;
            }
        }
        return ans;
    }
};