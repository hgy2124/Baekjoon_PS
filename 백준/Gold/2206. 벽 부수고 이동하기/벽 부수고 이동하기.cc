#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
typedef long long ll;

using namespace std;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int N, M;
int board[1002][1002];
int dist[1002][1002][2];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> N >> M;


	string s;
	for (int i = 1; i <= N; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '1')
				board[i][j + 1] = 1;
			else
				board[i][j + 1] = 0;
		}
	}

	queue <tuple<int, int, int>> q;
	q.push({ 1,1,0 });

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			dist[i][j][0] = dist[i][j][1] = -1;

	dist[1][1][0] = dist[1][1][1] = 1;

	bool arrive = false;
	while (!q.empty() && !arrive) {
		int x, y, pass;
		tie(x, y, pass) = q.front();
		q.pop();
		if (x == N && y == M) {
			cout << dist[x][y][pass];
			arrive = true;
		}


		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];


			if (nx<1 || ny<1 || nx>N || ny>M)	continue;

			if (board[nx][ny] == 0 && dist[nx][ny][pass] == -1) {
				dist[nx][ny][pass] = dist[x][y][pass] + 1;
				q.push({ nx,ny,pass });
			}

			//벽뚫기
			if (!pass && board[nx][ny] == 1 && dist[nx][ny][1] == -1) {
				dist[nx][ny][1] = dist[x][y][pass] + 1;
				q.push({ nx,ny,1 });
			}
		}

	}
	if (!arrive)
		cout << -1;
}