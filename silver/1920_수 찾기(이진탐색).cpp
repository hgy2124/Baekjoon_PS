#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,m;
	cin >> n;

	vector<int> arr;
	vector<int> arr2;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		arr2.push_back(num);
	}
	
	sort(arr.begin(), arr.end());

	for (int i = 0; i < m; i++){
		if (binary_search(arr.begin(),arr.end(),arr2[i])==true)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
}