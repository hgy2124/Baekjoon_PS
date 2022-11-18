#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int num;
	vector<int> vt;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 != 0) vt.push_back(num);
	}
	if (vt.size() == 0)
		cout << -1;
	else {
		sort(vt.begin(), vt.end());
		int sum = 0;
		for (auto a : vt)
			sum += a;
		cout << sum << "\n" << vt[0];
	}
	
}