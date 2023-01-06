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

void recur(int a, int b, int n) {
	if (n == 1) {
		cout << a << " " << b << "\n";
		return;
	}
	recur(a, 6 - a - b, n - 1); //맨밑 원판 빼고 1 -> 2으로
	cout << a << " " << b << "\n"; // 맨밑 원판 1 -> 3으로 옮기기
	recur(6 - a - b, b, n - 1);// 2 -> 3로 옮기기
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	cout << (1 << n) - 1 << '\n';
	recur(1, 3, n);

}