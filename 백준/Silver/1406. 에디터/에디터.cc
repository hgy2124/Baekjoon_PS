#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	list <char> l;

	string s; cin >> s;
	for (auto c : s) l.push_back(c);

	int m; cin >> m;
	char c,add;
	auto t = l.end();

	while (m--) {
		cin >> c;
		if (c == 'P') {
			cin >> add;
			l.insert(t, add);
		}
		else if (c == 'L') {
			if (t != l.begin()) t--;
		}
		else if (c == 'D') {
			if (t != l.end()) t++;
		}	
		else {
			if (t != l.begin()) {
				t--;
				t=l.erase(t);
			}
		}
	}
	for (auto c : l)
		cout << c;

}