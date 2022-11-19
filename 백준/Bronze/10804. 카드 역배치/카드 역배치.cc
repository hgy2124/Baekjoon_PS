#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int arr[21];
	for (int i = 1; i <= 20; i++)
		arr[i] = i;

	int a, b,temp;
	for (int i = 1; i <= 10; i++) {
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			temp = arr[j];
			arr[j] = arr[b];
			arr[b] = temp;
			b--;
		}
	}
	for (int i = 1; i <= 20; i++)
		cout << arr[i]<<" ";
}