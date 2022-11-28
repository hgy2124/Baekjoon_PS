#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int colmax[3] = { 0 }, colmin[3] = { 0 }, tempmax[3] = { 0 }, tempmin[3] = { 0 };
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> tempmax[j];
			tempmin[j] = tempmax[j];
			tempmax[j] += max(colmax[1], (j == 1) ? max(colmax[0], colmax[2]) : colmax[j]);
			tempmin[j] += min(colmin[1], (j == 1) ? min(colmin[0], colmin[2]) : colmin[j]);
		}
		memcpy(colmax, tempmax, sizeof(int) * 3);
		memcpy(colmin, tempmin, sizeof(int) * 3);
	}

	sort(colmax, colmax + 3);
	sort(colmin, colmin + 3);

	cout << colmax[2] << " " << colmin[0];
}