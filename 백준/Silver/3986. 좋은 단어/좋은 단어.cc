#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	string s;
	int cnt=0;
	
	while (n--) {
		stack <char> st;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (!st.empty() && st.top() == s[i])
				st.pop();
			else
				st.push(s[i]);
		}
		if (st.empty())
			cnt++;
	}
	cout << cnt;
}