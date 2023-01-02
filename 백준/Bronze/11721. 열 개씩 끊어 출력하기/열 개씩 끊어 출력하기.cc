#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string.h>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s; cin >> s;

	for (int idx = 1; idx <= s.size(); idx++) {
		cout << s[idx-1];
		if (idx % 10 == 0)
			cout << "\n";
	}

}