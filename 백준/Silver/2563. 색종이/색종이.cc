#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#define ll long long

using namespace std;
int arr[101][101];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;

	int x, y;
	
	memset(arr, 0, sizeof(arr));
	while (n--) {
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j] = 1;
			}

		}
			
	}

	ll sum = 0;
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			sum += arr[i][j];
	cout << sum;
}