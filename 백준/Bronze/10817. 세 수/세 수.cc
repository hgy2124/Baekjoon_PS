#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c; cin >> a >> b >> c;
	vector<int> vt;
	vt.push_back(a);
	vt.push_back(b);
	vt.push_back(c);

	sort(vt.begin(), vt.end());

	cout << vt[1];

}