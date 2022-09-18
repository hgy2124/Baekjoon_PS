#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[1001]={0,};
	int arr2[1001]={0,};
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		arr[a]++;
		arr2[b]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (arr[i] == 1) {
			cout << i << " ";
			break;
		}
	}
	for (int i = 0; i < 1001; i++) {
		if (arr2[i] == 1) {
			cout << i;
			break;
		}
	}
}