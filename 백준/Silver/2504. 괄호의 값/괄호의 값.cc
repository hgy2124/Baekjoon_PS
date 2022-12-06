#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
typedef long long ll;

using namespace std;

int main(void) {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s; cin >> s;
	stack <char> st;

	ll ans = 0;
	ll num = 1; //곱해질 값

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			num *= 2;
			st.push(s[i]);
		}
		else if (s[i] == '[') {
			num *= 3;
			st.push(s[i]);
		}
		else if (s[i] == ')') {
			if(st.empty() || st.top() != '('){
				cout << 0;
				return 0;
			}
			if (s[i - 1] == '(')
				ans += num;
			st.pop();
			num /= 2;
		}
		else if (s[i] == ']') {
			if (st.empty() || st.top() != '[') {
				cout << 0;
				return 0;
			}
			if (s[i - 1] == '[')
				ans += num;
			st.pop();
			num /= 3;
		}
	}

	if (!st.empty())
		cout << 0;
	else
		cout << ans;
}