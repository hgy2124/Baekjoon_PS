#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

bool arr[10] = { false, };

bool check(int k) {
	string s = to_string(k);
	for (int i = 0; i < s.length(); i++) {
		if (arr[s[i] - '0'])
			return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	int m; cin >> m;

	int num;

	while (m--) {
		cin >> num;
		arr[num] = true;
	}

	int temp = abs(100 - n);
	for (int i = 0; i <= 1000000; i++) {
		if (check(i))
			temp = min(temp, abs(i-n)+ (int)to_string(i).length());
	}
	cout << temp;
}