#include <bits/stdc++.h>

using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	bool isPrime[10001];
	fill(isPrime + 2, isPrime + 10000, true);
	for (int i = 2; i <= 10000; i++) {
		if (isPrime[i]) {
			for (int j = 2*i; j <= 10000; j += i)
				isPrime[j] = false;
		}
	}

	int num;
	while (t--) {
		cin >> num;
		for (int i = num / 2; i >= 2; i--) {
			if (isPrime[i] && isPrime[num-i]) {
				cout << i << " "<<num-i<<"\n";
				break;
			}
		}
	}
}