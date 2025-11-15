/* https://leetcode.com/problems/compute-decimal-representation/submissions/1829981957/ */

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector <int> v_ans;
        long int a = 1;
        while (n != 0) {
            if (n % 10 != 0) {
                v_ans.push_back(n % 10 * a);
            }
            a *= 10;
            n /= 10;
        }
        reverse(v_ans.begin(), v_ans.end());
        return v_ans;
    }
};