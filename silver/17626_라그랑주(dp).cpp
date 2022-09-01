#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int dp[50001] = { 0,1 };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	
	for (int i = 2; i <= n; i++) {
		dp[i] = 1 + dp[i - 1];
		for (int i2 = 2; i2 * i2 <= i; i2++)
			dp[i] = min(dp[i], 1 + dp[i - i2 * i2]);
	}
	cout << dp[n];
}