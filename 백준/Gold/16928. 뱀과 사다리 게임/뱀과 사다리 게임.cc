#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int leg[101]={0,};
queue <pair<int, int>> q;
bool visited[101]={false};

int temp;
int cnt = 0;

void find() {
	q.push({ 1, cnt });
	visited[1] = true;
	while (!q.empty()) {
		temp = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (temp == 100) {
			cout << cnt;
			break;
		}
		else{
			int temp2;
			for (int i = 1; i <= 6; i++) {
				temp2 = temp + i;
				if (temp2 <= 100 ) {
					while (leg[temp2] != 0)
						temp2 = leg[temp2];

					if (!visited[temp2]) {
						q.push({ temp2,cnt + 1 });
						visited[temp2] = true;
					}
				}
			}
		}
	}

}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	int x, y;
	while (n--) {
		cin >> x >> y;
		leg[x] = y;
	}

	int u, v;
	while (m--) {
		cin >> v >> u;
		leg[v] = u;
	}
	find();
}