/* https://codeforces.com/problemset/problem/1742/E */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
	ios::sync_with_stdio ( false ) ;
	cin.tie(NULL) ;
	long long int n, t, q, sum = 0, l;
	cin >> t;
	for (long long int i = 1; i <= t; i++) {
	    long long int m = 0;
		cin >> n >> q;
		cin >> ws;
		vector<long long int> v_steps;
		long long int a_steps[n], a_questions[q], a_sum[n+1], a_mirror[q];
		map<long long int, long long int> m_answers;
		for (long long int j = 0; j < n; j++) {
		    long long int temp;
			cin >> temp;
			sum += temp;
			a_sum[j+1] = sum;
			v_steps.push_back(temp);
		}
		a_sum[0] = 0;
		sum = 0;
		for (long long int j = 0; j < q; j++) {
			cin >> a_questions[j];
			a_mirror[j] = a_questions[j];
		}
		sort(a_questions, a_questions+q);
		for (long long int j = 0; j < q; j++) {
			for (l = m; l < n; l++) {
				if (a_questions[j] < v_steps[l]) {
				    m_answers[a_questions[j]] = a_sum[l];
				    m = l;
					break;
				}
				else if (l == n - 1) {
				    m_answers[a_questions[j]] = a_sum[l+1];
				    m = l;
				}
			}
		}
		for (long long int j = 0; j < q; j++) {
		    cout << m_answers[a_mirror[j]] << " ";
		}
		cout << "\n";
	}
	return 0;
}