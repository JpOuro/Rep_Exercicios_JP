/* https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1814087040/ */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }
        bool a_visited[256] = {false};
        int n = s.length();
        int C = 0;
        int j = 0;
        int i;
        for (i = 0; i < n; i++) {
            if (a_visited[s[i]]) {
                C = max(i - j, C);
                while (a_visited[s[i]]) {
                    a_visited[s[j]] = false;
                    j++;
                }
            }
            a_visited[s[i]] = true;
        }
        return max(i - j, C);
    }
};