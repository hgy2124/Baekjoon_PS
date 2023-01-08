#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <deque>
#include <string>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;

	while (true) {
		getline(cin, s);
		if (s == "END")
			break;
		else {
			int len = s.length();
			for (int i = 0; i <len; i++)
				cout << s[len-i-1];
		}
		cout << "\n";
	}

}