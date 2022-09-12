#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

vector <int> arr;
int origin[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int num;

	for (int i = 0; i < n;i++) {
		cin >> num;
		arr.push_back(num);
		origin[i] = num;
	}
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(arr.begin(), arr.end(), origin[i]) - arr.begin() << " ";
	}
}