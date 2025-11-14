/* https://leetcode.com/problems/find-k-closest-elements/submissions/1829554868/ */

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector <int> v_ans;
        int L, R;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > x) {
                if (i > 0) {
                    L = i - 1;
                }
                else {
                    L = i;
                }
                break;
            }
        }
        if (L == arr.size()) {
            L--;
        }
        R = L + 1;
        while (v_ans.size() != k) {
            if (R == arr.size()) {
                while (v_ans.size() != k) {
                    v_ans.push_back(arr[L]);
                    L--;
                }
            }
            else if (L == -1) {
                while (v_ans.size() != k) {
                    v_ans.push_back(arr[R]);
                    R++;
                }
            }
            else {
                if (abs(x - arr[L]) > abs(x - arr[R])) {
                    v_ans.push_back(arr[R]);
                    R++;
                }
                else if (abs(x - arr[L]) <= abs(x - arr[R])) {
                    v_ans.push_back(arr[L]);
                    L--;
                }
            }
        }
        sort(v_ans.begin(), v_ans.end());
        return v_ans;
    }
};