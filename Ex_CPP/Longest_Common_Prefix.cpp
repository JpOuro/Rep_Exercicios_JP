/* https://leetcode.com/problems/longest-common-prefix/submissions/1798405753/ */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int i = 0;
        int m = strs.size();
        while (i > -1) {
            if (i == strs[0].size()) {
                return s;
            }
            char a = strs[0][i];
            for (int j = 1; j < m; j++) {
                if (i >= strs[j].size()) {
                    return s;
                }
                if (strs[j][i] != a) {
                    return s;
                }
            }
            s = s + a;
            i++;
        }
        return s;
    }
};