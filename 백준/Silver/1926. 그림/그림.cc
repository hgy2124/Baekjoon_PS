#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int n, m;
bool arr[501][501];
queue <pair<int,int>> q; 
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int area = 0;

void bfs(int x, int y) {
	area = 1;
	q.push({ x,y });
	arr[x][y] = false;
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny]) {
				q.push({ nx,ny });
				arr[nx][ny] = false;
				area++;
			}
		}
	}
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> m;

	int one_cnt=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int cnt = 0;
	vector <int> vt;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j]==1) {
				bfs(i, j);
				vt.push_back(area);
				cnt++;
			}
	if (vt.size() > 0) {
		sort(vt.begin(), vt.end());
		cout << cnt << "\n" << vt[vt.size() - 1];
	}
	else
		cout << cnt<<"\n" << 0;
}