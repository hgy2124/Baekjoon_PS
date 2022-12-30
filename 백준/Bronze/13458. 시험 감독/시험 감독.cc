#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <cmath>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	int a, b; 
	double c;
	
	vector <int> vt;
	for (int i = 0; i < n; i++) {
		cin >> a;
		vt.push_back(a);
	}
	cin >> b >> c;

	ll cnt = 0;
	double temp;
	for (int i = 0; i < n; i++) {
		temp=max(vt[i] - b, 0);
		if (temp == 0) continue;
		else
			cnt += ceil(temp / c);
	}

	cout << cnt+n;
}