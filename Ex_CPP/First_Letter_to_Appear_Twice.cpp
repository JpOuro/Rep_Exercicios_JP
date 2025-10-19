/* https://leetcode.com/problems/first-letter-to-appear-twice/submissions/1805905646/ */

class Solution {
public:
    char repeatedCharacter(string s) {
        map <char, int> m_lcounter;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            m_lcounter[s[i]]++;
            if (m_lcounter[s[i]] > 1) {
                return s[i];
            }
        }
        return s[0];
    }
};