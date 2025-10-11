/* https://leetcode.com/problems/valid-parentheses/submissions/1798550292/ */

class Solution {
public:
	bool isValid(string s) {
		vector <char> v_open;
		int n = s.size();
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				v_open.push_back('(');
			}
			else if (s[i] == '[') {
				v_open.push_back('[');
			}
			else if (s[i] == '{') {
				v_open.push_back('{');
			}
			else if (s[i] == ')') {
                if (v_open.empty()) {
                    return false;
                }
				if (v_open.back() != '(') {
					return false;
				}
				v_open.pop_back();
			}
			else if (s[i] == ']') {
                if (v_open.empty()) {
                    return false;
                }
				if (v_open.back() != '[') {
					return false;
				}
				v_open.pop_back();
			}
			else if (s[i] == '}') {
                if (v_open.empty()) {
                    return false;
                }
				if (v_open.back() != '{') {
					return false;
				}
				v_open.pop_back();
			}
		}
		if (!v_open.empty()) {
			return false;
		}
		return true;
	}
};