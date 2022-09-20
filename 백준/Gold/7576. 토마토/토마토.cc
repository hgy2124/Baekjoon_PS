#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int m, n;
int tmt0 = 0;
queue <pair<int, int>> q;
int visited[1001][1001];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int a, b;


void bfs() {
	int day = 0;
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		day = visited[a][b];
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny]) {
				visited[nx][ny] = day+1;
				tmt0--;
				q.push(make_pair(nx, ny));
			}
		}
	}
	
	if (tmt0 == 0)
		cout << day-1;
	else
		cout << -1;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> m>> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> visited[i][j];
			if (visited[i][j] == 1)
				q.push(make_pair(i, j));
			else if (visited[i][j] == 0)
				tmt0++;
		}
	}
	bfs();
}