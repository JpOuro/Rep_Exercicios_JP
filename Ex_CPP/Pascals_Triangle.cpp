/* https://leetcode.com/problems/pascals-triangle/submissions/1832265950/ */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> v_ans;
        v_ans.push_back({1});
        if (numRows == 1) {
            return v_ans;
        }
        v_ans.push_back({1,1});
        if (numRows == 2) {
            return v_ans;
        }
        for (int i = 1; i < numRows - 1; i++) {
            vector <int> v_rows;
            v_rows.push_back(1);
            for (int j = 0; j < v_ans[i].size() - 1; j++) {
                v_rows.push_back(v_ans[i][j] + v_ans[i][j+1]);
            }
            v_rows.push_back(1);
            v_ans.push_back(v_rows);
        }
        return v_ans;
    }
};