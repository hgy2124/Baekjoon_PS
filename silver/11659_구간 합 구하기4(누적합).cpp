#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int arr[100001] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	int num,temp=0;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		arr[i] = num+temp;
		temp = arr[i];
	}

	int start, end,ans=0;
	while (m--) {
		cin >> start >> end;
		ans = arr[end]-arr[start-1];
		cout << ans<<'\n';
	}
}