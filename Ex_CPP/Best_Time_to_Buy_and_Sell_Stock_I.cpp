/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1834658875/ */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int D = 0;
        int C = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (C > prices[i]) {
                C = prices[i];
            }
            else {
                D = max(D, prices[i] - C);
            }
        }
        return D;
    }
};