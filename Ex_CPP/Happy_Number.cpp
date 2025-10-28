/* https://leetcode.com/problems/happy-number/submissions/1813999621/ */

class Solution {
public:
    bool isHappy(int n) {
        int i = n;
        int j = n;
        int s = 0;
        do {
            while (i != 0) {
                s += pow((i % 10), 2);
                i = i / 10;
            }
            i = s;
            s = 0;
            int d = 2;
            while (d--) {
                while (j != 0) {
                    s += pow((j % 10), 2);
                    j = j / 10;
                }
                j = s;
                s = 0;
            }
            if (i == 1 || j == 1) {
                return true;
            }
        } while (i != j);
        return false;
    }
};