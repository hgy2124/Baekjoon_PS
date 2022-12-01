#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <unordered_map>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	int sum, cnt = 0;
	unordered_map<int, bool> mp;

	int num;
	for (int i = 0; i < a;i++) {
		cin >> num;
		mp[num] = true;
	}
	for (int i = 0; i < b;i++) {
		cin >> num;
		if (mp[num])
			cnt++;
	}
	cout << a+b-2*cnt;
}