/* https://leetcode.com/problems/search-a-2d-matrix/submissions/1820458713/ */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int L = 0;
        int R = n - 1 + n*(m-1);
        while (L <= R) {
            int M = L + (R - L) / 2;
            int CM = M % n;
            int RM = (M - CM) / n;
            if (matrix[RM][CM] == target) {
                return true;
            }
            else if (matrix[RM][CM] > target) {
                R = M - 1;
            }
            else {
                L = M + 1;
            }
        }
        return false;
    }
};