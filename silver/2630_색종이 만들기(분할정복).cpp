#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int wt, bl;
int arr[128][128];
int cnt=0;

void divide(int x, int y, int k) {
	cnt = 0;
	for (int i = x; i < x+k; i++) {
		for (int j = y; j < y+k; j++) {
			if (!arr[i][j])
				cnt++;
		}
	}

	if (cnt == k * k)
		wt++;
	else if (cnt == 0)
		bl++;
	else {
		divide(x, y, k/2);
		divide(x+k / 2, y, k/2);
		divide(x, y + k / 2, k / 2);
		divide(x + k / 2, y + k / 2, k / 2);
	}
	return;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	divide(0, 0, n);
	cout << wt<<'\n'<< bl<<'\n';

}