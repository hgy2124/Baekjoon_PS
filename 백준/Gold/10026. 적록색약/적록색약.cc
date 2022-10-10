#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int n;

int arr[101][101];
int arrblind[101][101];
int visited[101][101] = { 0, };

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int cnt=0;
queue <pair<int,int>> q;
int a, b;

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] && arr[nx][ny]==arr[a][b]) {
				visited[nx][ny] = true;
				q.push(make_pair(nx, ny));
			}
		}
	}
}
void bfs_blind(int x, int y) {
	visited[x][y] = true;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		a = q.front().first;
		b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] && arrblind[nx][ny] == arrblind[a][b]) {
				visited[nx][ny] = true;
				q.push(make_pair(nx, ny));
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'R') {
				arr[i][j] = 1;
				arrblind[i][j] = 1;
			}
			
			else if (s[j] == 'G') {
				arr[i][j] = -1;
				arrblind[i][j] = 1;
			}
				
			else
				arr[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt<<" ";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = 0;
		}
	}
	cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				cnt++;
				bfs_blind(i, j);
			}
		}
	}
	cout << cnt;
}