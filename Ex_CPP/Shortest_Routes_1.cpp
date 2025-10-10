/* https://cses.fi/problemset/task/1671 */

#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio ( false ) ;
    cin.tie(NULL) ;
    long long int n, m, a, b, c;
    const long long int INF = 2*pow(10, 14);
    typedef pair <long long int ,int> pi;
    
    vector<vector <pi>> v_graph;
    vector<long long int> v_dist;
    vector<bool> v_visited;
    
    cin >> n >> m;
    v_graph.resize(n+1);
    v_dist.resize(n+1, INF);
    v_visited.resize(n+1, false);
    while (m--) {
		cin >> a >> b >> c;
		v_graph[a].push_back(make_pair(c, b));
	}
    priority_queue <pi, vector<pi>, greater<pi>> pq_nodes;
    pq_nodes.push(make_pair(0, 1));
    v_dist[1] = 0;
    while (!pq_nodes.empty()) {
        long long int d = pq_nodes.top().first;
        long long int v = pq_nodes.top().second;
        pq_nodes.pop();
        if (v_visited[v]) {
            continue;
        }
        v_visited[v] = true;
        for (auto i : v_graph[v]) {
            if (!v_visited[i.second] && v_dist[i.second] > v_dist[v] + i.first) {
                v_dist[i.second] = v_dist[v] + i.first;
                pq_nodes.push(make_pair(v_dist[i.second], i.second));
            }
        }
    }
    for (long long int i = 1; i <= n; i++) {
        cout << v_dist[i] << " ";
    }
    return 0;
}