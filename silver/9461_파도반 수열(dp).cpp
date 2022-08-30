#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	ll n;
	ll arr[101]={0,1,1,1,2,2,3,4,5,7,9};
	while (t--) {
		cin >> n;
		if (n < 11)
			cout << arr[n]<<'\n';
		else {
			for (int i = 11; i <= n; i++) {
				arr[i] = arr[i - 1] + arr[i - 5];
			}
			cout << arr[n]<<'\n';
		}
		
	}
}