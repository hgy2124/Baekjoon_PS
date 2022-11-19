#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int call_t;
	vector <int> vt;
	while (n--) {
		cin >> call_t;
		vt.push_back(call_t);
	}

	int sum_y = 0;
	int sum_m = 0;
	for (int i = 0; i < vt.size(); i++) {
		if (vt[i] < 30) {
			sum_y += 10;
			sum_m += 15;
		}
		else if (vt[i] < 60) {
			sum_y += 20;
			sum_m += 15;
		}
		else {
			sum_y += (vt[i] / 30 + 1) * 10;
			sum_m += (vt[i] / 60 + 1) * 15;
		}

	}
	if (sum_y > sum_m)
		cout << "M " << sum_m;
	else if (sum_y < sum_m)
		cout << "Y " << sum_y;
	else
		cout << "Y M " << sum_y;
}