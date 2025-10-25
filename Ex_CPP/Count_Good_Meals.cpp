/* https://leetcode.com/problems/count-good-meals/submissions/1811201352/ */

class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map <int, long long int> um_freq;
        vector <int> v_compare;
        int n = deliciousness.size();
        int long long C = 0;
        for (int i = 0; i < 22; i++) {
            v_compare.push_back(pow(2, i));
        }
        for (int i = 0; i < n; i++) {
            um_freq[deliciousness[i]]++;
        }
        for (auto& pair : um_freq) {
            int a = pair.first;
            int b = pair.second;
            for (int i = 0; i < v_compare.size(); i++) {
                int c = v_compare[i] - a;
                if (c == a) {
                    C += ((long)b * ((long)b - 1)) / 2;
                }
                else if (c > a && um_freq.count(c)) {
                    C += (um_freq[c] * (long)b);
                }
            }
        }
        return (C % (int)(1e9 + 7));
    }
};