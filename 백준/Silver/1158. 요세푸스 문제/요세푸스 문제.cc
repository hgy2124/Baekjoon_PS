#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, k; cin >> n >> k;

	int pre[5001] = { 0, };
	int nxt[5001] = { 0, };

	for (int i = 1; i <= n; i++) {
		pre[i] = (i == 1) ? n : i - 1;
		nxt[i] = (i == n) ? 1 : i + 1;
	}

	int len = n;
	int cnt = 1;
	vector <int> vt;
	for (int i = 1; len > 0; i=nxt[i]) {
		if (cnt == k) {
			pre[nxt[i]] = pre[i];
			nxt[pre[i]] = nxt[i];
			vt.push_back(i);
			cnt = 1;
			len--;
		}
		else
			cnt++;
	}

	cout << "<";
	for (int i = 0;i<vt.size();i++) {
		if (i + 1 == vt.size())
			cout << vt[i];
		else
			cout << vt[i] << ", ";
	}
	cout << ">";
}