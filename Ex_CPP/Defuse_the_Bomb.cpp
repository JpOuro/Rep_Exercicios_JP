/* https://leetcode.com/problems/defuse-the-bomb/submissions/1828143850/ */

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector <int> v_ans(code.size(), 0);
        if (k == 0) {
            return v_ans;
        }
        else if (k > 0) {
            int S = 0;
            for (int i = 0; i <= k; i++) {
                S += code[i];
            }
            for (int i = 0; i < code.size(); i++) {
                S -= code[i];
                v_ans[i] = S;
                S += code[(i + k + 1) % code.size()];
            }
        }
        else {
            int S = 0;
            for (int i = -1; i >= k; i--) {
                S += code[i + code.size()];
            }
            for (int i = 0; i < code.size(); i++) {
                v_ans[i] = S;
                S += code[i];
                S -= code[(i + k + code.size()) % code.size()]; 
            }
        }
        return v_ans;
    }
};