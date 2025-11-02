/* https://leetcode.com/problems/valid-anagram/submissions/1818155836/ */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        vector <int> v_freq1(26, 0);
        vector <int> v_freq2(26, 0);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            v_freq1[s[i] - 97]++;
            v_freq2[t[i] - 97]++;
        }
        for (int i = 0; i < 26; i++) {
            if (v_freq1[i] != v_freq2[i]) {
                return false;
            }
        }
        return true;
    }
};