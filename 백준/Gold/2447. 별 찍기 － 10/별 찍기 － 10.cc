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

void recur(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << " ";
	}
	else {
		if (n / 3 == 0)
			cout << "*";
		else
			recur(i, j, n / 3);
	}
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);


	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			recur(i, j, n);
		}
		cout << "\n";
	}

}