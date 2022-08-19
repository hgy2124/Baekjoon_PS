#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;
	map<string, string> mp;
	string site;
	string pswd;
	for (int i = 0; i < n; i++) {
		cin >> site >> pswd;
		mp.insert({ site,pswd });
	}

	string find_s;
	for (int i = 0; i < m; i++) {
		cin >> find_s;
		cout << mp[find_s] << '\n';
	}
}