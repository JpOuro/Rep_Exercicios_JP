/* https://leetcode.com/problems/add-binary/submissions/1803498070/ */

class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        if (a.size() > b.size()) {
            int n = a.size() - b.size();
            for (int i = 0; i <= n; i++) {
                b = '0' + b;
            }
            a = '0' + a;
        }
        else {
            int n = b.size() - a.size();
            for (int i = 0; i <= n; i++) {
                a = '0' + a;
            }
            b = '0' + b;
        }
        int n = a.size();
        int e = 0;
        for (int i = n - 1; i > -1; i--) {
            int i_a = a[i] - '0';
            int i_b = b[i] - '0';
            int r = i_a + i_b + e;
            char c = (r % 2) + '0';
            s = c + s;
            if (r > 1) {
                e = 1;
                continue;
            }
            e = 0;
        }
        if (s[0] == '0') {
            s.erase(0, 1);
            return s;
        }
        return s;
    }
};