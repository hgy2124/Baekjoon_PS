#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int t; cin >> t;

	while (t--) {
		int sum = 0;
		int MIN=100;
		int num;
		for (int i = 0; i < 7; i++) {
			cin >> num;
			if (num % 2 == 0) {
				sum += num;
				if (MIN > num)
					MIN = num;
			}
		}
		cout << sum << " " << MIN << "\n";
	}
}