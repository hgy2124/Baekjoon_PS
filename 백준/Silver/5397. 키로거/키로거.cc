#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	string s;
	
	while (n--) {
		cin >> s;
		list <char> l;
		auto t = l.begin();

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '<') {
				if (t != l.begin())
					t--;
			}
			else if (s[i] == '>') {
				if (t != l.end())
					t++;
			}
			else if (s[i] == '-') {
				if (t != l.begin()) {
					t--;
					t = l.erase(t);
				}

			}
			else l.insert(t,s[i]);
		}

		for (auto c : l) 
			cout << c;
		cout << "\n";
	}

}