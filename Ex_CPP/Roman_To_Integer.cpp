/* https://leetcode.com/problems/roman-to-integer */

class Solution {
public:
    int romanToInt(string s) {
        int a = 0;
        string start = "0";
        map<char, int> m_roman;
        m_roman['0'] = 0;
        m_roman['I'] = 1;
        m_roman['V'] = 5;
        m_roman['X'] = 10;
        m_roman['L'] = 50;
        m_roman['C'] = 100;
        m_roman['D'] = 500;
        m_roman['M'] = 1000;
        start.append(s);
        s = start;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            if (m_roman[s[i-1]] < m_roman[s[i]]) {
                a = a - 2*m_roman[s[i-1]] + m_roman[s[i]];
            }
            else {
                a += m_roman[s[i]];
            }
        }
        return a;
    }
};