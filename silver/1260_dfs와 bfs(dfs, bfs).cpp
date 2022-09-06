#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
#include <queue>
#define ll long long

using namespace std;

int n, m,v,x,y,k;

vector<int> vt[1001];
bool visited[1001];

queue <int> q;
stack <int> s;

void dfs(int a) {
	visited[a] = 1;
	cout << a << " ";
	for (int i = 0; i < vt[a].size(); i++) {
		if (!visited[vt[a][i]]) {
			dfs(vt[a][i]);
		}
	}
}

void bfs(int b) {

	visited[b] = 1;
	q.push(b);

	while (!q.empty()) {
	    k = q.front();
		cout << k << " ";
		q.pop();
		
		for (int i = 0; i < vt[k].size(); i++) {
			if (!visited[vt[k][i]]) {
				q.push(vt[k][i]);
				visited[vt[k][i]]=1;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m >> v;

	
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vt[x].push_back(y); //dfs¿ë
		vt[y].push_back(x);
	}
	for (int i = 0; i < 1001; i++)
		sort(vt[i].begin(), vt[i].end());
	//dfs
	dfs(v);
	

	//bfs
	memset(visited, 0, sizeof(visited));
	cout <<"\n";
	bfs(v);
	
}