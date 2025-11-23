/* https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/description/  Beats: 100 - 78*/

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long int sum = 0;
        for (int i = 0; i < s.size(); i++) {
           if (s[i] != '0') {
            sum += s[i] - '0';
           }
           else {
            s.erase(i, 1);
            i--;
           }
        }
        if (s.empty()) {
            return 0;
        }
        return sum * stoi(s);
    }
};