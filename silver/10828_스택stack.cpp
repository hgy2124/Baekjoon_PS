#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string str;
	int m;

	stack <int> s;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			cin >> m;
			s.push(m);
		}

		else if (str == "pop") {
			if (s.empty())
				cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}

		else if (str == "size")
			cout << s.size() << endl;

		else if (str == "empty"){
			if (s.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}

		else if (str == "top") {
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
	}

}