/* https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1815909946/ */

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string a_table[] = {"abc", "def", "ghi", "jkl", 
        "mno", "pqrs", "tuv", "wxyz"};
        vector <string> v_ans = {""};
        for (auto& x : digits) {
            vector <string> v_temp;
            for (auto& y : v_ans) {
                for (auto& z : a_table[x - '2']) {
                    v_temp.push_back(y + z);
                }
            }
            v_ans = v_temp;
        }
        return v_ans;
    }
};