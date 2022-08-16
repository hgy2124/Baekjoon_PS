#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	map<string, int>dict;
	string name;

	for (int i = 0; i < n; i++) {
		cin >> name;
		dict.insert({ name,i + 1 });
	}

	string in;
	for (int i = 0; i < m; i++) {
		cin >> in;
		if (isdigit(in[0])) {
			cout << dict[stoi(in)] << '\n';
		}
			
		else
			cout << dict[in] << '\n';
	}
}