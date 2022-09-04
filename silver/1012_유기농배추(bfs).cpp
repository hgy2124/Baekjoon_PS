#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#define ll long long

using namespace std;

int m, n, k, x, y;

queue <pair<int,int>> q;

bool arr[51][51]={0,};
bool visited[51][51]={0,};

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int cnt = 0;

void bfs(int a, int b) {
	visited[a][b] = true;
	q.push(make_pair(a, b));

	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (arr[nx][ny] == 1 && !visited[nx][ny]) {
					visited[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		cnt = 0;
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));

		while (k--) {
			cin >> x >> y; //행과 열을 바꿔서 받아야 가로 세로 형태로 된다
			arr[y][x] = 1;
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1 && !visited[i][j]) {
					bfs(i,j);
					cnt++;
				}
			}
		}

		cout << cnt<<'\n';
	}
}