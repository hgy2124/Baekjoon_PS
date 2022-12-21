#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	int temp,a=0,b=0,c=0;
	if (t >= 300) {
		temp = t / 300;
		a += temp;
		t -= temp * 300;
	}
	if (t >= 60) {
		temp = t / 60;
		b += temp;
		t -= temp * 60;
	}
	if (t >= 10) {
		temp = t / 10;
		c += temp;
		t -= temp * 10;
	}
	if (t != 0)
		cout << -1;
	else
		cout << a << " " << b << " " << c;
}