#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long

using namespace std;

int n, r, c;
int num = 0;


void divide(int x, int y, int k) {
	if (x == r && y == c) {
		cout << num;
		return;
	}
	
	if ((x<=r && x+k>r)&&(y<=c && y+k>c)) {
		divide(x, y, k / 2);
		divide(x, y + k / 2, k / 2);
		divide(x + k / 2, y, k / 2);
		divide(x + k / 2, y + k / 2, k / 2);
	}
	else
		num += k * k;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> r >> c;

	divide(0, 0, pow(2,n));
}