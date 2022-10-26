#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;
int arr[9];
bool visited[9] = { false };
vector <int> vt;
void dfs(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 0; i < vt.size(); i++) {
			if (!visited[i]) {
				visited[i] = true;
				arr[x] = vt[i];
				dfs(x + 1);
				visited[i] = false;
			}
			
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		vt.push_back(num);
	}
	sort(vt.begin(), vt.end());
	dfs(0);
}