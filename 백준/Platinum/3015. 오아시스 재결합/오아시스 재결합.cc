#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	ll num;
	ll ans=0;
	stack <pair<int, int>> st;

	while (n--) {
		cin >> num;
		int cnt = 1; // 나와 높이가 같은 사람 cnt
		while (!st.empty() && st.top().first <= num) {
			ans += st.top().second;
			if (st.top().first == num) // 같은 사람이면 
				cnt += st.top().second; // cnt에 더해주기
			st.pop();
		}
		if (!st.empty()) 
			ans++;
		st.push({ num, cnt });
	}
	cout << ans;
}