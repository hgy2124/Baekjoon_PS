#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

#define ll long long

using namespace std;

int arr[2][100001];
int dp[2][100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int n;
	while (t--) {
		cin >> n;
		memset(arr, 0, sizeof(arr));
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < 2; i++)
			for (int j = 1; j <= n; j++)
				cin >> arr[i][j];
		dp[0][0] = 0; 
		dp[1][0] = 0;
		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];
		for (int i = 2; i <= n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + arr[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + arr[1][i];
		}
		cout << max(dp[0][n], dp[1][n]) << "\n";
	}
}