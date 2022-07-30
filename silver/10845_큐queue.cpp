#include <iostream>
#include <queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	queue <int> q;
	string s;
	int num, temp;


	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push") {
			cin >> num;
			q.push(num);
		}

		else if (s == "pop") {
			if (q.empty() == 1)
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		
		else if (s == "size")
			cout << q.size() << endl;
		else if (s == "empty") {
			if (q.empty() == 1)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "front") {
			if (q.empty() == 1)
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (s == "back") {
			if (q.empty() == 1)
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}

}