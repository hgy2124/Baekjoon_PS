#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	n = 1000 - n;

	int cnt = 0;
	if (n >= 500) {
		cnt += n / 500;
		n -= (n / 500) * 500;
	}
	if (n >= 100) {
		cnt += n / 100;
		n -= (n / 100) * 100;
	}
	if (n >= 50) {
		cnt += n / 50;
		n -= (n / 50) * 50;
	}
	if (n >= 10) {
		cnt += n / 10;
		n -= (n / 10) * 10;
	}
	if (n >= 5) {
		cnt += n / 5;
		n -= (n / 5) * 5;
	}
	cnt += n;
	cout << cnt;
}