#include <iostream>

using namespace std;

int find(int x) {

	int min=5000;

	for (int i = 0; 5 * i <= x; i++) {
		for (int i2 = 0; 3 * i2 <= x; i2++) {
			if (5 * i + 3 * i2 == x) {
				if (min > i + i2)
					min = i + i2;
			}
		}
	}

	if (min == 5000) 
		min = -1;

	else if (x < 3)
		min = -1;

	return min;
}


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,cnt;

	cin >> n;

	cnt=find(n);

	cout << cnt;
}