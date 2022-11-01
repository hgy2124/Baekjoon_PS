#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int arr[1001];
	int dp[1001];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = 1;
	}
		
	for (int i = 1; i <= n; i++) {
		for (int j = i-1; j >0; j--) {
			if(arr[i]>arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (dp[i] > cnt)
			cnt = dp[i];
	}
	cout << cnt;
	
}