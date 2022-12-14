#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;


int M, N, K;
bool visited[101][101]={false};

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue <pair<int,int>> q;
int bfs(int x, int y) {
	
	q.push({ x,y });
	visited[x][y] = true;
	int cnt = 1;

	while (!q.empty()) {
		auto v = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = v.first + dx[i];
			int ny = v.second + dy[i];
			if (nx < 0 || nx >= M || ny < 0 || ny >= N)	continue;
			if (visited[nx][ny])	continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
			cnt++;
		}
	}
	return cnt;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> N >> M >> K;

	int sx, sy,ex,ey;
	while (K--) {
		cin >> sx >> sy>>ex>>ey;
		for (int i = sx; i < ex; i++)
			for (int j = sy; j < ey; j++)
				visited[i][j] = true;
	}


	vector<int> vt;
	int area = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				vt.push_back(bfs(i, j));
				area++;
			}
		}
	}

	sort(vt.begin(), vt.end());

	cout << area << "\n";

	for (auto a : vt)
		cout << a << " ";

}