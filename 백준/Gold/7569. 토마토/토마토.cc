#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

#define ll long long

using namespace std;

int m, n,h;
int tmt0 = 0;

int visited[101][101][101];

int dx[6] = { 0,1,0,-1,0,0 };
int dy[6] = { 1,0,-1,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
int a, b, c;

typedef struct xyz {
	int x, y, z;
};
queue <xyz>q;

void bfs() {
	int day = 0;
	while (!q.empty()) {
		a = q.front().x;
		b = q.front().y;
		c = q.front().z;
		day = visited[a][b][c];
		q.pop();
		for (int i = 0; i < 6; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			int nz = c + dz[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && nz >= 0 && nz < h && !visited[nx][ny][nz]) {
				visited[nx][ny][nz] = day + 1;
				tmt0--;
				q.push({ nx, ny, nz });
			}
		}
	}

	if (tmt0 == 0)
		cout << day - 1;
	else
		cout << -1;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> m >> n>>h;
	bool flag = true;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> visited[i][j][k];
				if (visited[i][j][k] == 1) {
					q.push({i,j,k});
				}
					
				else if (visited[i][j][k] == 0) {
					tmt0++;
					flag = false;
				}	
			}
		}
	}
	if (flag == true)
		cout << 0;
	else
		bfs();
}