#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

const int MAX_V = 20000;
const int INF = 1000000000;

vector <pair<int, int>> vt[MAX_V];
int dist[MAX_V];
bool visited[MAX_V] = { false };
priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	fill(dist, dist + MAX_V, INF);

	int u, v, w;
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> w;
		vt[u].push_back({ v,w });
	}
	cin >> u >> v;

	dist[u] = 0;
	pq.push({ u,dist[u]});

	while (!pq.empty()) {
		int check = pq.top().first;
		int curr = pq.top().second;
		pq.pop();

		if (dist[check] < curr) continue;

		for (int w = 0;w<vt[check].size();w++) {
			int d = curr + vt[check][w].second;
			int next = vt[check][w].first;

			if (dist[next] > d) {
				dist[next] = d;
				pq.push({next, d });
			}
		}
	}

	cout << dist[v];

}