#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	int a, b;
	int ans=1;
	while (t--) {
		ans = 1;
		cin >> a >> b;
		for (int i = 0; i < b; i++) {
			ans = (ans * a) % 10;
		}
		if (ans == 0)
			ans = 10;
		cout << ans<<"\n";
	}

}