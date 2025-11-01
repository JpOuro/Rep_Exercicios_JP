/* https://leetcode.com/problems/valid-sudoku/submissions/1817146130/ */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <bool> v_col(9, false);
        vector <bool> v_row(9, false);
        vector <bool> v_box(9, false);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (v_row[board[i][j] - '1']) {
                        return false;
                    }
                    v_row[board[i][j] - '1'] = true;
                }
                if (board[j][i] != '.') {
                    if (v_col[board[j][i] - '1']) {
                        return false;
                    }
                    v_col[board[j][i] - '1'] = true;
                }
                int a = (i/3)*3+j/3;
                int b = (i % 3)*3 + (j % 3);
                if (board[a][b] != '.') {
                    if (v_box[board[a][b] - '1']) {
                        return false;
                    }
                    v_box[board[a][b] - '1'] = true;
                }
            }
            for (int i = 0; i < 9; i++) {
                v_col[i] = false;
                v_row[i] = false;
                v_box[i] = false;
            }
        }
        return true;
    }
};