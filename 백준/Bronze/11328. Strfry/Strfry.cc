#include <iostream>
#include <cstring>
#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	string s1, s2;
	
	
	while (n--) {
		cin >> s1 >> s2;
		int arr[27] = { 0, };

		for (auto a : s1) arr[a - 'a']++;
		for (auto a : s2) arr[a - 'a']--;

		bool flag = false;
		for (auto a : arr) {
			if (a != 0) {
				cout << "Impossible\n";
				flag = true;
				break;
			}
		}
		if(flag==false)
			cout << "Possible\n";
	}
}