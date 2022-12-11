#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int arr[1002][1002];
int w, h;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int visitedF[1002][1002];
int visitedS[1002][1002];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;

	while (t--) {

		bool escape = false;
		queue <pair<int, int>> qf = {}, qs = {};
		
		cin >> h >> w;

		for (int i = 0; i < w; i++) {
			fill(visitedF[i], visitedF[i] + h, 0);
			fill(visitedS[i], visitedS[i] + h, 0);
		}

		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				char c;
				cin >> c;
				if (c == '#') arr[i][j] = -1;
				else {
					if (c == '*') {
						qf.push({ i, j });
						visitedF[i][j] = 1;
					}
					else if (c == '@') {
						qs.push({ i, j });
						visitedS[i][j] = 1;
					}
					arr[i][j] = 0;
				}
			}
		}


		//불 시간 세기
		
		while (!qf.empty()) {
			int curX = qf.front().first;
			int curY = qf.front().second;
			qf.pop();
			for (int i = 0; i < 4; i++) {
				int nx = curX + dx[i];
				int ny = curY + dy[i];
				if (nx>=0 && nx<w && ny>=0 && ny<h && arr[nx][ny] != -1 && !visitedF[nx][ny]) {
					visitedF[nx][ny] = visitedF[curX][curY] + 1;
					qf.push({ nx,ny });
				}
			}
		}

		//상근이 시간 세기
		
		while (!qs.empty() && !escape) {
			int curX = qs.front().first;
			int curY = qs.front().second;
			qs.pop();
			for (int i = 0; i < 4; i++) {
				int nx = curX + dx[i];
				int ny = curY + dy[i];
				if (nx < 0 || nx >= w || ny < 0 || ny >= h) {
					cout << visitedS[curX][curY] << "\n";
					escape = true;
					break;
				}
				if (arr[nx][ny] == -1)
					continue;
				if (visitedS[nx][ny])
					continue;
				if (visitedF[nx][ny] != 0 && visitedS[curX][curY] + 1 >= visitedF[nx][ny])
					continue;
				visitedS[nx][ny] = visitedS[curX][curY] + 1;
				qs.push({ nx,ny });
			}
		}
		if (!escape)
			cout << "IMPOSSIBLE" << "\n";
	}
}