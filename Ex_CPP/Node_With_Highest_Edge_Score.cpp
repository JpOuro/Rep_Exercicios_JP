/* https://leetcode.com/problems/node-with-highest-edge-score/submissions/1812368201/ */

class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector <unsigned> v_score(n, 0);
        for (int i = 0; i < n; i++) {
            v_score[edges[i]] += i;
        }
        int A = 0;
        int B = 0;
        for (int i = 0; i < n; i++) {
            if (B < v_score[i]) {
                B = v_score[i];
                A = i;
            }
        }
        return A;
    }
};