/* https://leetcode.com/problems/pascals-triangle-ii/submissions/1834206626/ */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> v_ans = {1};
        long long int L = 1;
        for (int i = 0; i < rowIndex; i++) {
            L = L*(rowIndex - i)/(i + 1);
            v_ans.push_back(L);
        }
        return v_ans;
    }
};