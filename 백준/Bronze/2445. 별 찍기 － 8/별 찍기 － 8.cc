#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for(int i2=1;i2<=i;i2++)
			cout << "*";
		for (int j = 1; j <= 2*(n-i); j++)
			cout << " ";
		for (int i2 = 1; i2 <= i; i2++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int i2 = n-1; i2 >= i; i2--)
			cout << "*";
		for (int j = i; j >=1; j--)
			cout << " ";
		for (int j = i; j >= 1; j--)
			cout << " ";
		for (int i2 = n - 1; i2 >= i; i2--)
			cout << "*";
		cout << "\n";
	}

	
}