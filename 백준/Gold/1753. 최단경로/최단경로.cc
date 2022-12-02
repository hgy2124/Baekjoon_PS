#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;
const int MAX_V = 20001;
const int INF = 1000000000;
using namespace std;

int dist[MAX_V];
vector <pair<int, int>> vt[MAX_V];
bool visited[MAX_V] = { false };
priority_queue < pair<int, int>> pq;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int V, E, K; cin >> V >> E >> K;
	int u, v, w;
	
	for (int i = 0; i < E;i++) {
		cin >> u >> v >> w;
		vt[u].push_back({ v,w });
	}
	for (int i = 1; i <= V; i++)	dist[i] = INF;

	dist[K]=0;
	pq.push({ 0,K });

	while (!pq.empty()) {
		int cur = pq.top().second;
		int check = -pq.top().first;
		
		pq.pop();
		if (dist[cur] < check) //cur이 더 작으면 진행할 필요X
			continue;

		for (int i = 0; i < vt[cur].size(); i++) {
			int d = vt[cur][i].first;
			int next = check + vt[cur][i].second;

			if (dist[d] > next) {
				dist[d] = next;
				pq.push({ -dist[d],d });
			}
		}
	}

	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF) {
			cout << "INF\n";
		}
		else
			cout << dist[i] << "\n";
	}	
}