#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int board[9][9];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	char c;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> c;
			if (c == '.')
				board[i][j] = 0;
			else
				board[i][j] = 1;
		}
	}

	int cnt = 0;
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0 && board[i][j] == 1)
				cnt++;
			else if (i % 2 != 0 && j % 2 != 0 && board[i][j] == 1)
				cnt++;
		}
	}
	cout << cnt;
}