/* https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1800384402/ */

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int i = 0;
        int m = needle.size();
        while (i < n) {
            if ((needle.compare(haystack.substr(i, m))) == 0) {
                return i;
            }
            i ++;
        }
        return -1;
    }
};