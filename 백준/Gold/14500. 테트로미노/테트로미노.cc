#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;
int arr[501][501] = { false };
bool visited[501][501] = { false };

int dx[4] = { 0,0,1,-1 };
int dy[4] = { -1,1,0,0 };
int ans = 0;

void tshape() {
	int sum = 0;

	for (int i = 2; i < n; i++) {
		for (int j = 1; j < m; j++) {
			sum = arr[i - 1][j] + arr[i][j] + arr[i + 1][j] + arr[i][j + 1];
			ans = max(ans, sum);
		}
	}

	for (int i = 2; i < n; i++) {
		for (int j = 2; j <= m; j++) {
			sum = arr[i - 1][j] + arr[i][j] + arr[i + 1][j] + arr[i][j - 1];
			ans = max(ans, sum);
		}
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j < m; j++) {
			sum = arr[i][j - 1] + arr[i][j] + arr[i][j + 1] + arr[i - 1][j];
			ans = max(ans, sum);
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 2; j < m; j++) {
			sum = arr[i][j - 1] + arr[i][j] + arr[i][j + 1] + arr[i + 1][j];
			ans = max(ans, sum);
		}
	}
}

void find(int x, int y, int cnt, int sum) {

	if (cnt == 4) {
		ans = max(ans, sum);
		return;
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx<1 || ny<1 || nx>n || ny >m)
			continue;
		if (!visited[nx][ny]) {
			visited[nx][ny] = true;
			find(nx, ny, cnt + 1, sum + arr[nx][ny]);
			visited[nx][ny] = false;
		}

	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			visited[i][j] = true;
			find(i, j, 1, arr[i][j]);
			visited[i][j] = false;
		}
	}
	tshape();
	cout << ans;
}