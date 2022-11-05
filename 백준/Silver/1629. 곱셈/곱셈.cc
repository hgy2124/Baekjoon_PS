#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

ll divide(int x, int y, int z) {
	if (y == 1)
		return x % z;
	//y가 홀수
	else if (y % 2 != 0)
		return ((divide(x, y - 1, z) * x) % z);
	//y가 짝수
	else {
		ll temp = divide(x, y / 2, z);
		return (temp * temp) % z;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c; cin >> a >> b >> c;

	cout << divide(a, b, c);
	
}