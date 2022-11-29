#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m; cin >> n >> m;
	set<string> s;
	string str;

	while (n--) {
		cin >> str;
		s.insert(str);
	}

	int cnt = 0;
	while (m--) {
		cin >> str;
		if (s.find(str)!=s.end())
			cnt++;
	}
	cout << cnt;
}