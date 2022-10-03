#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int num;
	vector <int> vt;
	while (n--) {
		cin >> num;
		vt.push_back(num);
	}
	sort(vt.begin(), vt.end());

	if (vt[vt.size() - 1] % 2 == 0)
		cout << vt[vt.size() - 1] * 2;
	else if (vt.size() > 1)
		cout << vt[0] * vt[vt.size() - 1];
	else
		cout << vt[0] * vt[0];
}