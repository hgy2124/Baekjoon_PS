#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int n, m;
	while (t--) {
		cin >> n >> m;
		ll ans = 1;
		int r = 1;
		for (int i = m; i >m-n ; i--) {
			ans *= i;
			ans /= r++;
		}
		cout << ans << "\n";
	}
}