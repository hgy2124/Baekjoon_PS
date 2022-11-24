#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define ll long long

using namespace std;

bool check[2000001];
int arr[100001];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		check[arr[i]]=1;
	}

	int x; cin >> x;
	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (x <= arr[i] || x - arr[i] == arr[i])
			continue;
		if (check[x - arr[i]]) {
			cnt++;
			check[arr[i]] = 0;
		}
	}
	cout << cnt;
}