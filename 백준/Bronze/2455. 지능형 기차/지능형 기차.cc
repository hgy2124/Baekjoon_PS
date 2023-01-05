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

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int MAX = 0;
	int up, down;
	int train=0;
	for (int i = 0; i < 4; i++) {
		cin >> down >> up;
		train += up - down;
		if (train > MAX)
			MAX = train;
	}
	cout << MAX;
}