#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int w, h, x, y, p; cin >> w >> h >> x >> y >> p;
	int cnt = 0;
	int a, b;
	while (p--) {
		cin >> a >> b;
		if (a >= x && a <= x + w && b >= y && b <= y + h)
			cnt++;
		else if (a < x && sqrt(pow(x - a, 2) + pow(y + h / 2- b, 2)) <= h/2)
			cnt++;
		else if (a > x + w && sqrt(pow(x + w - a, 2) + pow(y + h / 2 - b, 2)) <= h/2)
			cnt++;
	}
	cout << cnt;
}