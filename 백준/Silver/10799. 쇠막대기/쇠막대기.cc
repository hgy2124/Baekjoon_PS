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

	stack <char> st;
	string s; cin >> s;

	ll cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i != 0 && !st.empty() && s[i - 1] == '(' && s[i] == ')') {
			st.pop();
			cnt += st.size();
		}
		else if (!st.empty() && s[i] == ')') {//막대가 끝나니까 잘리고 남은 부분 ++
			st.pop();
			cnt++;
		}
		else
			st.push(s[i]);
	}

	cout << cnt;
}