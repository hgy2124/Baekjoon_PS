#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return (a.second < b.second);
	return(a.first < b.first);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> arr;
	int x, y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}

	sort(arr.begin(), arr.end(), compare);

	for(int i=0;i<n;i++)
		cout << arr[i].first << " " << arr[i].second << "\n";
}