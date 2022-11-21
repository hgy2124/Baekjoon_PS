#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, k; cin >> n >> k;
	int arr[3][7] ={0,};
	int a, b;
	while (n--) {
		cin >> a >> b;
		arr[a][b]++;
	}

	int cnt = 0;
	for (int i = 0; i <= 1; i++) {
		for (int j = 1; j <= 6; j++) {
			if (arr[i][j] != 0 && arr[i][j] <= k) cnt += 1;
			else if (arr[i][j] != 0 && arr[i][j] % k == 0) cnt += arr[i][j] / k;
			else if (arr[i][j] != 0) cnt += arr[i][j] / k + 1;
		}
	}
	cout << cnt;
}