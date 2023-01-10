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

bool board[102][102];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int lx, ly, rx, ry;
	for (int i = 0; i < 4; i++) {
		cin >> ly >> lx >> ry >> rx;
		for (int x = ly; x < ry; x++) {
			for (int y = lx; y < rx; y++) {
				board[x][y] = true;
			}
		}
	}
	int cnt = 0;
	
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (board[i][j]==true)
				cnt++;
		}
	}
	cout << cnt;
}