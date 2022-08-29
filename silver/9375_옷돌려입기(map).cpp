#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int n;
	map<string, int> mp;
	string name,cate;

	int cnt=1;
	while (t--) {
		cin >> n;
		mp.clear();
		cnt = 1;
		for (int i = 0; i < n;i++) {
			cin >> name >> cate;
			mp[cate]++;
		}
		for (auto& it : mp) {
			cnt *= it.second + 1;
		}
		cout << cnt-1<<'\n';
	}

}