/* https://leetcode.com/problems/remove-zeros-in-decimal-representation/description/  Beats: 100 - 74*/

class Solution {
public:
    long long removeZeros(long long n) {
        long long int A = 0;
        long long int R = 1;
        long long int P = 1;
        while (n / R != 0) {
            if ((n / R) % 10 != 0) {
                A += ((n / R) % 10) * P;
                P *= 10; 
            }
            R *= 10;
        }
        return A;
    }
};