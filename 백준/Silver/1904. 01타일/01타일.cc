#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

ll dp[1000002];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	if (n > 2)
		for (int i = 3; i <= n; i++)	dp[i] = (dp[i - 1] + dp[i - 2])%15746;

	cout << dp[n];

}