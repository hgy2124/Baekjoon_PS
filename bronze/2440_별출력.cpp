#include <iostream>

using namespace std;

int main() {
	int n,i=0;
	cin >> n;
	for (; i < n; i++) {
		for (int i2 = 0; i2 < n - i; i2++) {
			cout << "*";
		}
		cout << "\n";
	}
}