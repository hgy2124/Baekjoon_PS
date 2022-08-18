#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;

	int p;
	vector<int> vt;
	for (int i = 0; i < n; i++) {
		cin >> p;
		vt.push_back(p);
	}

	sort(vt.begin(), vt.end());

	int time=0;
	vector<int> vt2;
	for (int i = 0; i < n; i++) {
		time += vt[i];
		vt2.push_back(time);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += vt2[i];
	}
	cout << sum;
}