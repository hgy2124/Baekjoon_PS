#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	int k, n;
	int arr[16][16]={0,};
	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (i == 0) {
				arr[i][j] = j;
			}
				
			else {
				for (int j2 = 1; j2 <= j; j2++)
					arr[i][j] += arr[i - 1][j2];
			}
		}
	}
	while (t--) {
		cin >> k>>n;

		cout << arr[k][n]<<"\n";
	}
}