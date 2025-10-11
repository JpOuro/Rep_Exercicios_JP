/* https://leetcode.com/problems/palindrome-number/ */

class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int a, b, n;
	    if (x < 0) {
	    	return false;
	    }
	    string num = to_string(x);
	    n = num.size();
	    a = 0;
	    b = n - 1;
        int i = 0;
	    for (int i = 0; i != (n / 2) + 1; i++) {
            if (num[i] != num[n - 1 - i]) {
                return false;
            }
	    }
    return true;
    }
};