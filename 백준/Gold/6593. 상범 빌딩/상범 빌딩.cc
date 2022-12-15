#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;



int dx[6] = { 0,0,1,-1,0,0 };
int dy[6] = { 1,-1,0,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

struct xyz {
	int x;
	int y;
	int z;
};

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	while (true) {
		int build[31][31][31] = { 0, };
		bool visited[31][31][31] = { false };

		int L, R, C; cin >> L >> R >> C;
		if (L == 0 && R == 0 && C == 0)	break;

		else {
			queue <xyz> q;

			char c;
			int ex, ey, ez;

			for (int k = 0; k < L; k++) {
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < C; j++) {
						cin >> c;
						if (c == '#')
							build[i][j][k] = -1;
						else if (c == 'E') {
							ex = i;
							ey = j;
							ez = k;
							build[i][j][k] = 0;
						}

						else if (c == 'S') {
							q.push({ i,j,k });
							visited[i][j][k] = 1;
							build[i][j][k] = 0;
						}
						else
							build[i][j][k] = 0;
					}
				}
			}
			bool escape = false;

			while (!q.empty() && !escape) {
				auto v = q.front();
				q.pop();
				for (int i = 0; i < 6; i++) {
					int nx = v.x + dx[i];
					int ny = v.y + dy[i];
					int nz = v.z + dz[i];
					if (nx == ex && ny == ey && nz == ez) {
						cout << "Escaped in " << build[v.x][v.y][v.z] + 1 << " minute(s).\n";
						escape = true;
						break;
					}
					if (nx < 0 || ny < 0 || nz < 0 || nx >= R || ny >= C || nz >= L)	continue;
					if (visited[nx][ny][nz])	continue;
					if (build[nx][ny][nz] == -1)	continue;
					visited[nx][ny][nz] = 1;
					build[nx][ny][nz] = build[v.x][v.y][v.z] + 1;
					q.push({ nx,ny,nz });
				}
			}
			if (!escape)
				cout << "Trapped!\n";
		}
	}
}