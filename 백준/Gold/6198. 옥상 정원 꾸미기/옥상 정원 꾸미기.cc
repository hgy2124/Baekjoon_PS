#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#define ll long long

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n; cin >> n;
	ll h;
	stack <int> st;
	ll cnt = 0;

	while (n--) {
		cin >> h;
		while (!st.empty() && st.top()<=h) 
			st.pop();
		cnt += st.size();
		st.push(h);
	}
	cout << cnt;
}