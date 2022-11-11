#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[10][10];
	int ans=0, x=1, y=1;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cin >> arr[i][j];
			if (ans < arr[i][j]) {
				ans = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	cout << ans << "\n" << x << " "<<y;
}