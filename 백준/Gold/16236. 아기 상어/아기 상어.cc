#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
#define ll long long

using namespace std;

int n;
int temp_x, temp_y;
int arr[21][21];
int dx[5] = { -1,0,1,0 };
int dy[5] = { 0,-1,0,1 };
int temp = 0, cnt = 0;
int shark_size = 2;

struct point {
	int px, py, pr;
};

bool compare(const point& a, const point& b) {
	if (a.pr == b.pr) {
		if (a.px == b.px)
			return a.py < b.py;
		else
			return a.px < b.px;
	}
	return a.pr < b.pr;
}

//거리 계산용
int visited[21][21];

//먹을 수 있는 물고기 넣는 벡터
vector <point> vt; 

int bfs(int k, int k2) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visited[i][j] = -1;
		}
	}
	visited[k][k2] = 0;
	vt.clear();
	queue <pair<int,int>> q;
	q.push({k,k2});

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx=x+dx[i];
			int ny=y+dy[i];
			if (nx>=0 && nx<n && ny>=0 && ny<n && visited[nx][ny]==-1 && arr[nx][ny]<=shark_size) {
				if(arr[nx][ny] < shark_size && arr[nx][ny] > 0)
					vt.push_back({ nx, ny, visited[x][y] + 1});
				else {
					q.push({ nx, ny });
					visited[nx][ny] = visited[x][y] + 1;
				}
			}
			
		}
	}
	if (!vt.empty()) {
		sort(vt.begin(), vt.end(), compare);

		temp_x = vt[0].px;
		temp_y = vt[0].py;
		cnt += vt[0].pr;

		arr[temp_x][temp_y] = 0;
		temp++;
		if (temp == shark_size) {
			shark_size++;
			temp = 0;
		}
		return 1;
	}
	else
		return 0;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	int temp=0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 9) {
				temp_x = i;
				temp_y = j;
			}
		}
	}
	
	arr[temp_x][temp_y] = 0;

	while (true) {
		bool check = bfs(temp_x, temp_y);
		if (check == 0)
			break;
	}
	cout << cnt;
}