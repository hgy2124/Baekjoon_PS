#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	string s="";
	while (n--) {
		for (int i = 0; i < s.size(); i++)
			cout << " ";
		for (int i = 1; i <= n; i++)
			cout << "*";
		cout << "*";
		for (int i = 1; i <= n; i++)
			cout << "*";
		cout << "\n";
		s.push_back(1);
	}
	

}