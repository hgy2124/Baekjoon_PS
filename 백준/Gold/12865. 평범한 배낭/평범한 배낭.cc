#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int DP[101][100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K; cin >> N >> K;

	vector <pair<int, int>> vt;
	vt.push_back({ 0,0 });

	int W, V;
	for (int i = 0; i < N; i++) {
		cin >> W >> V;
		vt.push_back({ W,V });
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			if (j < vt[i].first)
				DP[i][j] = DP[i - 1][j];
			else
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - vt[i].first] + vt[i].second);
		}
	}
	cout << DP[N][K];
}