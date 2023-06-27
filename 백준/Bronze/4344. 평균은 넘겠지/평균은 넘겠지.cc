#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
#include <iomanip>

typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int c;
	cin >> c;

	int n, num, cnt;
	double sum=0;
	vector <int> vt;
	while (c--) {
		sum = 0;
		cnt = 0;
		cin >> n;
		vt.clear();
		for (int i = 0; i < n; i++) {
			cin >> num;
			vt.push_back(num);
			sum += num;
		}
		double avg = sum / n;
		for (auto v : vt) {
			if (v > avg)
				cnt++;
		}
		double res = (static_cast<double>(cnt) / n) * 100;
		cout << fixed << setprecision(3) << round(res*1000)/1000 << "%" << '\n';
	}
	
}