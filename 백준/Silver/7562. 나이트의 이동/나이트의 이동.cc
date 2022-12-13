#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int dx[8] = { 1,1,2,2,-1,-1,-2,-2 };
int dy[8] = { 2,-2,1,-1,2,-2,1,-1 };
int visited[301][301];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;

	int l, x, y,ex,ey;
	while (t--) {
		cin >> l;
		cin >> x >> y;
		cin >> ex >> ey;

		queue<pair<int, int>> q;

		for (int i = 0; i < l;i++) {
			fill(visited[i], visited[i] + l, -1);
		}
		q.push({ x, y });
		visited[x][y] = 0;

		while (!q.empty()) {
			auto v = q.front();
			q.pop();
			for (int i = 0; i < 8; i++) {
				int nx = v.first + dx[i];
				int ny = v.second + dy[i];
				if (nx < 0 || nx >= l || ny < 0 || ny >= l)	continue;
				if (visited[nx][ny] != -1)	continue;
				visited[nx][ny] = visited[v.first][v.second] + 1;
				q.push({ nx,ny });
			}
		}
		cout << visited[ex][ey] << "\n";
	}
	

}