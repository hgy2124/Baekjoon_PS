#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

bool visited[1001];
vector<int>vt[1001];

int cnt = 0;
void find(int x) {
	visited[x] = 1;
	for (int i = 0; i < vt[x].size(); i++) {
		if (!visited[vt[x][i]])
			find(vt[x][i]);
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int node, edge;
	cin >> node >> edge;
	int u, v;

	
	while (edge--) {
		cin >> u >> v;
		vt[u].push_back(v);
		vt[v].push_back(u);
	}
	for (int i = 1; i <= node;i++) {
		if (!visited[i]) {
			cnt++;
			find(i);
		}
	}
	
	cout << cnt;
}