#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;
int dp[501][501]={0,};
int arr[501][501]={0,};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	
	int idx=1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> arr[i][j];
	dp[1][1] = arr[1][1];
	dp[2][1] = dp[1][1] + arr[2][1];
	dp[2][2] = dp[1][1] + arr[2][2];

	for (int i = 3; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}

	int ans=0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, dp[n][i]);
	cout << ans;
}