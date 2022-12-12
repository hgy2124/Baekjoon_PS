#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int n;
int arr[101][101];
int MAXNUM=0;
queue <pair<int,int>> q;
bool visited[101][101];
int cnt = 0;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


void bfs(int x, int y, int h) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		for (int i = 0; i < 4;i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n)	continue;
			if (arr[nx][ny] <= h || visited[nx][ny])	continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			MAXNUM=max(arr[i][j],MAXNUM);
		}
	}

	int MAXCNT = 0;
	for (int h = 0; h < MAXNUM; h++) {
		for(int j=0;j<n;j++)
			fill(visited[j], visited[j] + n, 0);
		cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] > h && !visited[i][j]) {
					bfs(i, j, h);
					cnt++;
				}

			}
		}
		MAXCNT=max(cnt,MAXCNT);
	}
	cout << MAXCNT;
}