#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,num,cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int i2 = 2; i2 < num+1; i2++) {
			if (num % i2 == 0) {
				if (i2 == num) {
					cnt += 1;
				}
				else {
					break;
				}
			}
		}
	}
	cout << cnt;
}