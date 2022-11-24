#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	int arr[10] = { 0, };
	while (n) {
		arr[n % 10]++;
		n /= 10;
	}

	int cnt = 1;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9)
			continue;
		cnt = max(cnt, arr[i]);
	}
	cnt = max(cnt, (arr[6] + arr[9] + 1) / 2);
	cout << cnt;
}