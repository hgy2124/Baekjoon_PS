#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int arr[2188][2188];
int cnt1 = 0, cnt2 = 0, cnt3 = 0;
int flag;

int n;

void divide(int x, int y, int k) {
	bool check = 1;
	flag = arr[x][y];
	for (int i = x; i < x+k; i++) {
		for (int j = y; j < y+k; j++) {
			if (arr[i][j] != flag) {
				check = 0;
				break;
			}	
		}
	}
	if (check) {
		if (flag == -1)
			cnt1++;
		else if (flag == 0)
			cnt2++;
		else if (flag == 1)
			cnt3++;
	}
	

	else {
		divide(x, y, k / 3);
		divide(x, y + k / 3, k / 3);
		divide(x, y + k / 3 * 2, k / 3);
		divide(x + k / 3, y, k / 3);
		divide(x + k / 3, y + k / 3, k / 3);
		divide(x + k / 3, y + k / 3 * 2, k / 3);
		divide(x + k / 3 * 2, y, k / 3);
		divide(x + k / 3 * 2, y + k / 3, k / 3 );
		divide(x + k / 3 * 2, y + k / 3 * 2, k / 3);
	}
	return;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin>>arr[i][j];
		}
	}
	divide(0, 0, n);
	cout << cnt1 << '\n' << cnt2 << '\n' << cnt3;
}