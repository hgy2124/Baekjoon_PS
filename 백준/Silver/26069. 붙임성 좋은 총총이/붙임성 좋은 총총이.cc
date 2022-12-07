#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <unordered_map>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;

	unordered_map<string, int> um;
	int ans = 1;
	string key = "ChongChong";
	um.insert({ key, ans }); 
	string s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		if (um.find(s1) != um.end()) {
			um.insert({ s1, ans++ });
			um.insert({ s2, ans });
		}
		else if(um.find(s2) != um.end()) {
			um.insert({ s2, ans++ });
			um.insert({ s1, ans });
		}
	}
	cout << um.size();
}