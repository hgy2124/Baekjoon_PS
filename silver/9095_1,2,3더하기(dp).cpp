#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t; cin >> t;
	int arr[11];
	int n,max=0;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		arr[i] = n;
		if (max < n)
			max = n;
	}
	int arr2[11]={0,1,2,4};

	for (int i = 4; i < 11; i++) {
		arr2[i] = arr2[i - 1] + arr2[i - 2] + arr2[i - 3];
	}
	
	for (int i = 1; i <= t; i++) {
		n = arr[i];
		cout << arr2[n] << '\n';
	}
	
	
}