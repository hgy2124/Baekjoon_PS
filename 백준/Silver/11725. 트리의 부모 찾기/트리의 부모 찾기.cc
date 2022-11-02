#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int arr[100001];
int ans[100001];
bool visited[100001]={false,};
vector <vector<int>> vt;

void dfs(int k) {
	visited[k] = true;
	for (int i = 0; i < vt[k].size(); i++) {
		if (!visited[vt[k][i]]) {
			ans[vt[k][i]] = k;
			visited[vt[k][i]]=true;
			dfs(vt[k][i]);
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vt.resize(100001);

	int n; cin >> n;
	int num1, num2;
	for (int i = 1; i < n; i++) {
		cin >> num1 >> num2;
		vt[num1].push_back(num2);
		vt[num2].push_back(num1);
	}
	dfs(1);
	for (int i = 2; i <= n; i++)
		cout << ans[i] << "\n";
}