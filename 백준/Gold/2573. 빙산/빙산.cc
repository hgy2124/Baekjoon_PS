#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int n, m;
int board[302][302];
int minus[302][302];
int visited[302][302];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue <pair<int, int>> q;

void BFS() {
	int minus[302][302]={0,};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			
			if (board[i][j] == 0)	continue;

			for (int k = 0; k < 4; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (nx < 0 || ny < 0 || nx >= n || ny >= m)	continue;
				if (board[nx][ny] != 0)	continue;
				minus[i][j]++;
			}
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			board[i][j] = max(0, board[i][j] - minus[i][j]);
}


int check() {
	queue <pair<int, int>> q;
	int cnt = 0;
	int x, y;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] > 0) {
				cnt++;
				x = i;
				y = j;
			}
		}
	}
	if (cnt == 0) //없음
		return 0;
	int cnt2 = 0;
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		auto v = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int nx = v.first + dx[i];
			int ny = v.second + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)	continue;
			if (visited[nx][ny] == 1 || board[nx][ny] == 0)	continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
		cnt2++;
	}
	if (cnt == cnt2) //한덩이
		return 1;
	return 2;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	int year = 0;
	while (true) {
		year++;
		BFS();
		for (int i = 0; i < n; i++)
			fill(visited[i], visited[i] + m, 0);
		int temp = check();
		if (temp == 0) {
			cout << 0;
			return 0;
		}
		else if (temp == 2){
			break;
		}
	}
	cout << year;
	return 0;
}