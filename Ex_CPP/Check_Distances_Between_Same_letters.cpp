/* https://leetcode.com/problems/check-distances-between-same-letters/submissions/1806986708/ */

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        vector <int> v_dist(26, -1);
        for (int i = 0; i < n; i++) {
            int j = s[i];
            j = j - 97;
            if (v_dist[j] == -1) {
                v_dist[j] = i + 1;
            }
            else {
                v_dist[j] = i - v_dist[j];
            }
        }
        for (int i = 0; i < 26; i++) {
            if (v_dist[i] != distance[i] && v_dist[i] != -1) {
                return false;
            }
        }
        return true;
    }
};