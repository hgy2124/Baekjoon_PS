#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s; cin >> s;

	vector<int>vt;
	vector<char>vt2;
	string number = "";
	int n;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+') {
			n = stoi(number);
			number = "";
			vt.push_back(n);
			vt2.push_back('+');
		}
		else if (s[i] == '-') {
			n = stoi(number);
			number = "";
			vt.push_back(n);
			vt2.push_back('-');

		}
		else {
			number += s[i];
		}
	}
	n = stoi(number);
	vt.push_back(n);

	int min = vt[0], flag = 0;

	for (int i = 1; i < vt.size(); i++) {
		if (vt2[i - 1] == '-' || flag == 1) {
			min -= vt[i];
			flag = 1;
		}
		else
			min += vt[i];
	}
	cout << min;
}