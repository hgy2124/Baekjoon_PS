#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n; cin >> n;
	queue <int> q;
	string s;
	int num;

	while (n--) {
		cin >> s;
		if (s == "push") {
			cin >> num;
			q.push(num);
		}
		else if (s == "pop") {
			if (q.empty() == true)
				cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (s == "size")
			cout << q.size() << "\n";
		else if (s == "empty") {
			if (q.empty()==true)
				cout << 1<<"\n";
			else
				cout << 0<<"\n";
		}
		
		else if (s == "front") {
			if (q.empty() == true)
				cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
			}
		}
		else if (s == "back") {
			if (q.empty() == true)
				cout << -1 << "\n";
			else {
				cout << q.back() << "\n";
			}
		}
	}

}