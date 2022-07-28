#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return(a < b);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> arr;
	int num;

	for (int i=0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end(),compare);
	
	for (int i=0; i < n; i++) {
		cout << arr[i]<<"\n";
	}
}