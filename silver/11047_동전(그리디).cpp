#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int>vt;
	int money;
	for (int i = 0; i < n; i++) {
		cin >> money;
		vt.push_back(money);
	}
	int cnt = 0;
	for (int i = vt.size(); k != 0;i--) {
		if(i==vt.size())
			i = i - 1;
		if (k>=vt[i]) {
			cnt += k / vt[i];
			k = k % vt[i];
		}
	}
	cout << cnt;
}