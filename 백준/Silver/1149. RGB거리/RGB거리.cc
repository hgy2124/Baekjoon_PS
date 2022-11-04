#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

struct color {
	int r;
	int g;
	int b;
};

color arr[1001];
color min_dp[1001];
int n;

void dp() {
	for (int i = 1; i <= n; i++) {
		min_dp[i].r = arr[i].r + min(min_dp[i-1].g, min_dp[i-1].b);
		min_dp[i].g = arr[i].g + min(min_dp[i-1].r, min_dp[i-1].b);
		min_dp[i].b = arr[i].b + min(min_dp[i-1].r, min_dp[i-1].g);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i].r >> arr[i].g >> arr[i].b;
	dp();
	int ans=min(min(min_dp[n].r, min_dp[n].g), min_dp[n].b);
	cout << ans;
}