#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> vt;
	int x;
	while (n--) {
		cin >> x;
		vt.push_back(x);
	}
	sort(vt.begin(), vt.end(),greater<>());

	cout << vt[k-1];

}