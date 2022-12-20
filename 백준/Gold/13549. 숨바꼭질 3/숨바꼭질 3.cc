#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int n, k;
int MAX = 200000;
int dist[200002];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> k;
	
	fill(dist, dist + MAX, -1);

	deque <int> dq;
	dq.push_back(n);
	dist[n] = 0;
	
	while (!dq.empty()) {
		auto v = dq.front();
		dq.pop_front();
		if (2 * v < MAX && dist[2 * v] == -1) {
			dist[2 * v] = dist[v];
			dq.push_front(2 * v); //순간이동은 시간이 0듦
		}
		
		for (int nxt : {v - 1, v + 1}) {
			if (nxt < 0 or nxt >= MAX or dist[nxt] != -1) continue;
			dist[nxt] = dist[v] + 1;
			dq.push_back(nxt);
		}
	}
	cout << dist[k];
}