/* https://leetcode.com/problems/isomorphic-strings/submissions/1815296191/ */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector <int> v_map1(256, -1);
        vector <int> v_map2(256, -1);
        int n = s.size();
        for (int i = 0; i < n; i ++) {
            if (v_map1[s[i]] != v_map2[t[i]]) {
                return false;
            }
            else if (v_map1[s[i]] == -1) {
                v_map1[s[i]] = i;
                v_map2[t[i]] = i;
            }
        }
        return true;
    }
};