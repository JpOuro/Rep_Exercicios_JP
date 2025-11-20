/* https://leetcode.com/problems/count-distinct-integers-after-removing-zeros/submissions/1835534796/ */

class Solution {
public:
    long long countDistinct(long long n) {
        string s = to_string(n);
        if (s.size() == 1) {
            return n;
        }
        long long int A = (pow(9, s.size()) - 9) / 8;
        long long int I = 0;
        while (I < s.size() && s[I] != '0') {
            if (I == s.size() - 1) {
                A += (s[I] - '0');
            }
            else {
                A += (s[I] - '0' - 1) * pow(9, s.size() - I - 1);
            }
            I++;
        }
        return A;
    }
};