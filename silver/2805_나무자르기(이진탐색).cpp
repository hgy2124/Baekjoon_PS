#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll n, m;
	cin >> n >> m;

	vector<ll>vt;
	ll num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		vt.push_back(num);
	}
	
	sort(vt.begin(), vt.end());

	ll right = vt[n - 1];
	ll left = 1;
	ll mid = (right + left) / 2;
	ll sum = 0;
	ll temp = 0;
	while (left <= right) {
		temp = 0;
		sum = 0;
		for (int i = 0; i < n; i++) {
			temp=vt[i] - mid;
			if (temp < 0)
				temp = 0;
			sum += temp;
		}
		if (sum >= m) {
			left = mid + 1;
			mid= (right + left) / 2;
		}
			
		else if (sum < m) {
			right = mid - 1;
			mid= (right + left) / 2;
		}
	}
	cout << mid;
}