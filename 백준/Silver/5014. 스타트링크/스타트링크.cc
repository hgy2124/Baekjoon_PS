#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

bool visited[10000001] = { false };
queue <pair<int, int>> q;
int f, s, g, u, d;
int cnt = 0;

void bfs(int s, int g) {
	if (s == g) cout<<0;
	else {
		q.push({ s,0 });
		bool flag = false;
		int temp = 0;

		while (!q.empty()) {
			int a = q.front().first;
			int b = q.front().second;
			q.pop();

			if (a + u <= f && !visited[a + u]) {
				if (a + u == g) {
					temp = b + 1;
					flag = true;
					break;
				}
				visited[a + u] = true;
				q.push({ a + u,b + 1 });
			}
			if (a - d > 0 && !visited[a - d]) {
				if (a - d == g) {
					temp = b + 1;
					flag = true;
					break;
				}
				visited[a - d] = true;
				q.push({ a - d,b + 1 });
			}
		}

		if (flag == true)
			cout << temp;
		else
			cout << "use the stairs";
	}
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> f >> s >> g >> u >> d;

	bfs(s, g);
	

}