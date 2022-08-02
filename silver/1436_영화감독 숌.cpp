#include <iostream>

using namespace std;

bool func(int a) {
	int cnt = 0;
	int ans;
	while (a>0) {
		ans = a % 10;
		if (ans == 6) {
			cnt++;
			if (cnt == 3) return true;
		}
		else cnt = 0;

		a = a / 10;
	}
	if (cnt >= 3) return true;
	else return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[10001]={0,};
	int n;
	cin >> n;

	int cnt = 0;
	int i2 = 1;

	for (int i = 1;; i++) {
		if (func(i)) {
			arr[i2++] = i;
			cnt++;
		}
		if (cnt == 10000) break;
	}
	cout << arr[n] << "\n";

}