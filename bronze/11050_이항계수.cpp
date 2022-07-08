#include <iostream>

using namespace std;

int main() {
	int n, k,ans=1;
	cin >> n >> k;
	for (int i = n; i > 1; i--) {
		ans *= i;
	}
	for (int i = k; i > 1; i--) {
		ans /= i;
	}
	for (int i = n - k; i > 1; i--) {
		ans /= i;
	}
	cout << ans << endl;
}