/* https://cses.fi/problemset/task/1141 */

#include <bits/stdc++.h>
using namespace std;
int main ( )
{
	ios::sync_with_stdio ( false ) ;
	cin.tie(NULL) ;
	map<long long int, int> index;
	long long int n, c = 0, C = 0, p = 0;
	cin >> n;
	long long int a_songs[n];
	for (long long int i = 0; i < n; i++) {
		cin >> a_songs[i];
		if (index.find(a_songs[i]) == index.end()) {
		    index[a_songs[i]] = i;
		    c++;
		}
		else if (index[a_songs[i]] >= p){
		    if (c > C) {
		        C = c;
		    }
		    p = index[a_songs[i]];
		    c = i - p;
		    p++;
		    index[a_songs[i]] = i;
		}
		else {
		    index[a_songs[i]] = i;
		    c++;
		}
	}
	if (c > C) {
	    C = c;
    }
    cout << C;
	return 0;
}