#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	vector <int> vt;
	int m;
	while (n--) {
		cin >> m;
		vt.push_back(m);
	}
	sort(vt.begin(), vt.end());
	for (int i = 0; i < vt.size(); i++)
		cout << vt[i]<<'\n';
}