#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
#include <unordered_map>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int k, l; cin >> k >> l;
	unordered_map <string,int> mp;
	string str;
	for (int i = 0; i < l;i++) {
		cin >> str;
		if (mp.find(str) != mp.end()) {
			mp.erase(mp.find(str));
		}
		mp.insert({ str,i });
	}
	vector<pair<string, int>> vt(mp.begin(), mp.end());
	sort(vt.begin(), vt.end(), [](auto& a, auto& b) {return a.second < b.second;});

	int SIZE = min(k, (int)vt.size());
	for (int i = 0; i < SIZE; i++)
		cout << vt[i].first << "\n";
}