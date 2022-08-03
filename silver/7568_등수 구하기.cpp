#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> vt;
	int w;
	int h;

	for (int i = 0; i < n; i++) {
		cin >> w>>h;
		vt.push_back(make_pair(w, h));
	}

	int cnt;
	int rank;
	int arr[51];

	for (int i = 0; i < n; i++) {
		rank = 1;
		cnt = 1;
		for (int i2 = 0; cnt < n; i2++) {
			if (i == i2) i2++;
			if (vt[i].first <vt[i2].first) {
				if(vt[i].second < vt[i2].second)
					rank ++;
			}
			cnt++;
			if (i2 + 1 == n && cnt < n) i2 = -1;
		}
		arr[i] = rank;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}