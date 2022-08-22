#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int arr[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	arr[1] = 0;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0)
			arr[i] = min(arr[i / 3] + 1,arr[i]);
		if (i % 2 == 0)
			arr[i] = min(arr[i / 2] + 1, arr[i]);
	}
	cout << arr[n];
}