/* https://leetcode.com/problems/length-of-last-word/submissions/1801597341/ */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int c = 0;
        int i = n - 1;
        while (s[i] == ' ') {
            i--;
        }
        while (i > -1 && s[i] != ' ' ) {
            i--;
            c++;
        }
        return c;
    }
};