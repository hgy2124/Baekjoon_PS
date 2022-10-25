#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;
int arr[9];
int visited[9] = { false };

void dfs(int temp, int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = temp; i <= n; i++) {
			arr[x] = i;
			dfs(i, x + 1);
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	dfs(1, 0);
}