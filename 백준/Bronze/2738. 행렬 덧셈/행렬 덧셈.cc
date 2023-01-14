#include <iostream>

using namespace std;

int main() {
	int n,m,arr[101][101]={0,}, arr2[101][101] = { 0, };

	cin >> n >> m;

	for (int i2 = 0; i2 < n; i2++) {
		for (int i = 0; i < m; i++) {
			cin >> arr[i][i2];
		}
	}

	for (int i2 = 0; i2 < n; i2++) {
		for (int i = 0; i < m; i++) {
			cin >> arr2[i][i2];
		}
	}

	for (int i2 = 0; i2 < n; i2++) {
		for (int i = 0; i < m; i++) {
			cout << arr[i][i2] + arr2[i][i2] << " ";
		}
		cout << "\n";
	}
}