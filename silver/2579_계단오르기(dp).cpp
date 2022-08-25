#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int stair; cin >> stair;

	int num,arr[301];
	
	for (int i = 1; i <= stair; i++) {
		cin >> num;
		arr[i] = num;
	}

	int arr2[301]={0,};
	arr2[1] = arr[1];
	arr2[2] = arr[1]+arr[2];
	for (int i = 3; i <= stair; i++) {
		arr2[i] = max(arr2[i-3]+arr[i-1]+arr[i],arr2[i-2]+arr[i]);
	}
	cout << arr2[stair];
}