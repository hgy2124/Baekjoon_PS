#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int arr[100002];
int vis[100002];

void check(int x) {
	int cur = x;
	while (true) {
		vis[cur] = x;
		cur = arr[cur];

		if (vis[cur] == x) {
			//싸이클 돌기
			while (vis[cur] != -1) {
				vis[cur] = -1;
				cur = arr[cur];
			}
			return;
		}

		else if (vis[cur] != 0)
			return;
	}
}


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	
	while (t--) {
		int n; cin >> n;

		//방문 초기화
		fill(vis + 1, vis + n + 1, 0);

		for (int i = 1; i <= n;i++) {
			cin >> arr[i];
		}

		//싸이클 있는지 확인
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 0)
				check(i);
		}

		//싸이클에서 vis안된 번호들 cnt
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (vis[i] != -1) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
	

}