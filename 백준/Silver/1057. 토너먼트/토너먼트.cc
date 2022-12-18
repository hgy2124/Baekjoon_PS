#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, knum, inum; cin >> n >> knum >> inum;


	int cnt = 1;

	while (true) {
		if (knum - inum == -1 && knum%2!=0) {
			cout << cnt;
			break;
		}
		else if (inum - knum == -1 && inum % 2 != 0) {
			cout << cnt;
			break;
		}
		else {
			n = round(n/2);
			if (knum > 1) {
				knum = round((double)knum / 2);
				if (inum > 1)	inum = round((double)inum / 2);
				else inum == 1;
			}
			else {
				knum == 1;
				if (inum > 1)	inum = round((double)inum / 2);
				else inum == 1;
			}
		}
		cnt++;
	}
}