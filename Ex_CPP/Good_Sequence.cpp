/* https://atcoder.jp/contests/arc087/tasks/arc087_a */

#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
    ios::sync_with_stdio (false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    map <long long int, long long int> myMap;
    set <long long int> s_num;
    vector <long long int> v_num;
    while (n--) {
        long long int a;
        cin >> a;
        s_num.insert(a);
        myMap[a]++;
    }
    long long int c = 0;
    for (auto i : s_num) { 
        if (myMap[i] > i) {
            c += myMap[i] - i;
        }
        if (myMap[i] < i) {
            c += myMap[i];
        }
    };
    cout << c; 
    return 0;
}