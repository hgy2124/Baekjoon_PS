#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int arr[1001] = { 0,1,2 };
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 2] + arr[i - 1])%10007;

	cout << arr[n];
}