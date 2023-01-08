#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int arr[6] = {0,};
	int num;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> num;
			arr[i] += num;
		}
	}
	int max_idx=0, max=arr[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr[i]) {
			max_idx = i;
			max = arr[i];
		}
	}
	cout << max_idx + 1 << " " << max;
}