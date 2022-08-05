#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack <int> st;
	string s;
	int flag = 0;

	while (true) {
		flag = 0;
		while (!st.empty()) {
			st.pop();
		}
		getline(cin, s);

		if (s == ".") break;

		else {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '(' || s[i] == '[')
						st.push(s[i]);
				else if (s[i] == ')') {
					if (st.empty()) {
						cout << "no" << "\n";
						flag = 1;
						break;
					}
					else {
						if (st.top() == '(')
							st.pop();
						else {
							cout << "no" << "\n";
							flag = 1;
							break;
						}
					}
				}
				else if (s[i] == ']') {
					if (st.empty()) {
						cout << "no" << "\n";
						flag = 1;
						break;
					}
					else {
						if (st.top() == '[')
							st.pop();
						else {
							cout << "no" << "\n";
							flag = 1;
							break;
						}
					}
				}
			}
			if (flag == 0) {
				if (st.size() == 0)
					cout << "yes" << "\n";
				else
					cout << "no" << "\n";
			}
		}
		
	}
}