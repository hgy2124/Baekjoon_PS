#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> m >> n;
	bool pn[1000001]; fill_n(pn, 1000001, 1);
	pn[1] = 0;
	for (int i = 2; i * i <= n; i++) {
		for (int i2 = i + i;i2<=n ; i2 += i) {
			pn[i2] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (pn[i] == 1)
			cout << i << "\n";
	}
	
}