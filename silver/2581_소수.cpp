#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m, n, sum = 0, cnt = 1, first;
	cin >> m;
	cin >> n;

	for (int i = m; i < n + 1; i++) {
		for (int i2 = 2; i2 < i + 1; i2++) {
			if (i % i2 == 0) {
				if (i2 == i) {
					sum += i;
					if (cnt == 1)
						first = i;
					cnt = 0;
				}
				else {
					break;
				}
			}
		}
	}
	if (cnt == 1)
		cout << "-1";
	else
		cout << sum << "\n" << first;
}