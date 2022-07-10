#include <iostream>

using namespace std;


int main() {
	cin.tie(NULL);
	int n1, n2, gcd = 0, lcm = 0, flag = 0;

	cin >> n1 >> n2;

	for (int i = 1; i < n1 + 1 || i < n2 + 1; i++) {
		if (n1 % i == 0) {
			if (n2 % i == 0) {
				gcd = i;
			}
		}
	}
	for (int i = 1; flag == 0; i++) {
		if ((n2 * i) % n1 == 0) {
			lcm = n2 * i;
			flag = 1;
		}
	}
	cout << gcd << "\n" << lcm;
}