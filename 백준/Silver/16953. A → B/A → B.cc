#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;
ll a, b;
queue<pair<ll, ll>> q;
ll ans=-1;

void bfs(ll k,ll cnt) {
	q.push({ k,cnt });
	while (!q.empty()) {
		ll x = q.front().first;
		ll y = q.front().second;
		q.pop();
		if (x == b) {
			ans = y;
			break;
		}
		else {
			if (x*2<=b) {
				q.push({ x * 2,y+1 });
			}
			if (x * 10 + 1<=b) {
				q.push({ x * 10 + 1 ,y + 1 });
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> a >> b;
	bfs(a,1);
	cout << ans;
}