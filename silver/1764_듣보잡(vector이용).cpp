#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	vector<string> vt1;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		vt1.push_back(s);
	}
	vector<string> vt2;
	for (int i = 0; i < m; i++) {
		cin >> s;
		vt2.push_back(s);
	}

	sort(vt1.begin(), vt1.end());
	sort(vt2.begin(), vt2.end());

	int cnt = 0;
	int max,flag=0;
	if (n >= m)
		max = n;
		
	else {
		max = m;
		flag = 1;
	}
	vector <string> vt3;
	for (int i = 0; i < max; i++) {
		if (flag == 0) {
			if (binary_search(vt2.begin(), vt2.end(), vt1[i])) {
				cnt += 1;
				vt3.push_back(vt1[i]);
			}
				
		}
		else {
			if (binary_search(vt1.begin(), vt1.end(), vt2[i])) {
				cnt += 1;
				vt3.push_back(vt2[i]);
			}
		}
	}
	cout << cnt<<'\n';
	for (int i = 0; i < vt3.size(); i++)
		cout << vt3[i]<<'\n';
}