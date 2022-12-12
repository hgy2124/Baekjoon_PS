#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int R, C;
queue <pair<int, int>> qj;
queue <pair<int, int>> qf;
int board[1001][1001];
int visJ[1001][1001];
int visF[1001][1001];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		fill(visJ[i], visJ[i] + C, -1);
		fill(visF[i], visF[i] + C, -1);
	}

	char c;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> c;
			if (c == '#') board[i][j] = -1;
			else {
				if (c == 'F') {
				visF[i][j] = 0;
				qf.push({ i,j });
				}
				else if (c == 'J') {
				visJ[i][j] = 0;
				qj.push({ i,j });
				}
				board[i][j] = 0;
			}
		}
	}
	
	while (!qf.empty()) {
		auto v = qf.front();
		qf.pop();
		for (int i = 0; i < 4; i++) {
			int nx = v.first + dx[i];
			int ny = v.second + dy[i];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C)	continue;
			if (visF[nx][ny]>=0 || board[nx][ny] == -1)	continue;
			visF[nx][ny] = visF[v.first][v.second]+1;
			qf.push({ nx,ny });
		}
	}

	bool escape = false;
	while (!qj.empty() && !escape) {
		auto v = qj.front();
		qj.pop();
		for (int i = 0; i < 4; i++) {
			int nx = v.first + dx[i];
			int ny = v.second + dy[i];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
				escape = true;
				cout << visJ[v.first][v.second]+1;
				break;
			}
			if (visJ[nx][ny]>=0 || board[nx][ny] == -1)	continue;
			if (visF[nx][ny] != -1 && visF[nx][ny] <= visJ[v.first][v.second] + 1) continue;
			visJ[nx][ny] = visJ[v.first][v.second] + 1;
			qj.push({ nx,ny });
		}
	}
	if (!escape)
		cout << "IMPOSSIBLE";
	
}