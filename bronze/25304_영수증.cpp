#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x; cin >> x;
	int n; cin >> n;
	int a, b,sum=0;
	while (n--) {
		cin >> a >> b;
		sum += (a * b);
	}
	if (x == sum)
		cout << "Yes";
	else
		cout << "No";
}