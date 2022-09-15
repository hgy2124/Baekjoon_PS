#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int n,a,b;


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;
	vector <pair<int, int>> vt(n);
	for (int i = 0; i < n; i++) {
		cin >> vt[i].second >> vt[i].first ;
	}

	sort(vt.begin(), vt.end());

	int cnt = 0;
	int temp=0;
	for (int i = 0; i < n; i++) {
		if (temp <= vt[i].second) {
			temp = vt[i].first;
			cnt++;
		}
	}
	cout << cnt;
}