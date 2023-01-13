#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
typedef long long ll;

using namespace std;

int board[3074][6148];

void star(const int& x, const int& y) {
	board[x][y] = 1;
	board[x + 1][y - 1] = 1;
	board[x + 1][y + 1] = 1;
	for (int i = y - 2; i <= y + 2; i++)
		board[x + 2][i] = 1;
}

void func(const int& s, const int& x, const int& y) {
	if (s == 3) {
		star(x, y);
		return;
	}
	int ns = s / 2;
	func(ns, x, y);
	func(ns, x + ns, y - ns);
	func(ns, x + ns, y + ns);
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	func(n, 0, n - 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2*n-1; j++) {
			if (board[i][j] == 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}