#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	vector <int> vt;
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> num;
		sum += num;
		vt.push_back(num);
	}
	sort(vt.begin(), vt.end());
	cout << sum / 5 << "\n"<<vt[2];

}