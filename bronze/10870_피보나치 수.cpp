#include <iostream>

using namespace std;

int main() {
	int n, fn, fn1=1, fn2=0;
	cin >> n;
	if (n <= 1) {
		cout << n << endl;
	}
	else {
		for (int i = 1; i < n; i++) {
			fn = fn1 + fn2;
			fn2 = fn1;
			fn1 = fn;
		}
		cout << fn << endl;
	}
}