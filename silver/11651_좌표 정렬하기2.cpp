#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int, int> b) {
	if (a.second == b.second)
		return (a.first < b.first);
	
	return (a.second < b.second);

}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> vt;
	int x;
	int y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vt.push_back(make_pair(x, y));
	}

	sort(vt.begin(), vt.end(), compare);

	for (int i = 0; i < n; i++)
		cout << vt[i].first <<" "<< vt[i].second << "\n";
}