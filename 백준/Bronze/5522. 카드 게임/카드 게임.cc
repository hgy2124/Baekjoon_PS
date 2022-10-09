#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num = 5;
	int n;
	int sum = 0;
	while (num--) {
		cin >> n;
		sum += n;
	}
	cout << sum;
}