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
	for (int i = n; i >= 1; i--) {
		for (int j = i - 1; j >= 1; j--) cout << " ";
		for (int j2 = 1; j2 <= 2*(n-i+1)- 1; j2++) cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j >= 1; j--) cout << " ";
		for (int j2 = 2*(n-i)-1; j2 >=1; j2--) cout << "*";
		cout << "\n";
	}
}