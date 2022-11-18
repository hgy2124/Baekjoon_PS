#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector <int> vt;
	int num;
	int sum = 0;
	for (int i = 1; i <= 9; i++) {
		cin >> num;
		sum += num;
		vt.push_back(num);
	}
	sort(vt.begin(), vt.end());
	int temp;
	int temp2;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9;j++) {
			if (sum - vt[i] - vt[j] == 100) {
				temp = i;
				temp2 = j;
				break;
			}
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if (i == temp || i == temp2)
			continue;
		else
			cout << vt[i] << "\n";
	}

}