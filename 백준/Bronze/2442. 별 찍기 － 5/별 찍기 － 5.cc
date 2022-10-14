#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int j = 1;
	int i = n - 1;
	int temp;
	for (int k = 0; k < n; k++) {
		temp = i;
		for (; i > 0;i--)
			cout << " ";
		i=temp-1;
		for (int i2 = 0; i2 < j;i2++)
			cout << "*";
		cout << "\n";
		j += 2;
	}

}