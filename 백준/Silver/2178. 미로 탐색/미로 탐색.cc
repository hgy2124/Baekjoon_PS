#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#define ll long long

using namespace std;

int n, m;
int arr[101][101];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
queue<pair<int,int>> q;
int a, b;
int nx, ny;

int bfs(int x,int y) {
	q.push(make_pair(x, y));

	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = a + dx[i];
			ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny]==1) {
				arr[nx][ny] = arr[a][b] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}
	return arr[n - 1][m - 1];
}

int main(){

	scanf("%d %d",&n,&m);
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	printf("%d",bfs(0, 0));

	return 0;
}