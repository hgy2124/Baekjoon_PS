#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int a, b;
	int mcm;
	int temp;
	while (t--) {
		cin >> a >> b;
		if (a % b == 0)
			cout << a<<"\n";
		else if (b % a == 0)
			cout << b<<"\n";
		else {
			temp = min(a, b);
			for (int i = 1;; i++) {
				if ((temp * i) % a == 0 && (temp * i) % b == 0) {
					cout << temp*i << "\n";
					break;
				}
			}
		}
	}

}