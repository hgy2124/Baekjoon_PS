#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int n, m;
int arr[1025][1025];
int dp[1025][1025];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	int num;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> num;
			if (i == 1 && j == 1)
				dp[1][1] = num;
			else if (i == 1)
				dp[i][j] = dp[1][j - 1] + num;
			else if (j == 1)
				dp[i][j] = dp[i - 1][j] + num;
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]+num;
		}
	}

	int x1, y1, x2, y2;
	while (m--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1]<<"\n";
	}
}