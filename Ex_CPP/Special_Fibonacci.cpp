/* https://www.codechef.com/problems/FIBXOR01 */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
	ios::sync_with_stdio (false);
	cin.tie(NULL);
	long long int T, a, b, n, c;
	cin >> T;
	while (T--) {
	    cin >> a >> b >> n;
	    c = n % 3;
	    if (c == 0) {
	        cout << a << "\n";
	    }
	    else if (c == 1) {
	        cout << b << "\n";
	    }
	    else {
	     c = a ^ b;
    	 cout << c << "\n";   
    	}
	  }
	return 0;
}
