#include <iostream>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b,ans;
	cin >> a >> b;
	ans = (a + b) * (a - b);
	cout << ans;
}
