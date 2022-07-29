#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);



	int n;
	cin >> n;

	deque <int> dq;
	string s;
	int num,temp;
	

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (s == "push_back") {
			cin >> num;
			dq.push_back(num);
		}

		else if (s == "pop_front") {
			if (dq.empty()==1)
				cout << -1 << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (dq.empty() == 1)
				cout << -1 << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "size")
			cout << dq.size() << endl;
		else if (s == "empty"){
			if (dq.empty() == 1)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "front") {
			if (dq.empty() == 1)
				cout << -1 << endl;
			else
				cout << dq.front() << endl;
		}
		else if (s == "back") {
			if (dq.empty() == 1)
				cout << -1 << endl;
			else
				cout << dq.back() << endl;
		}
	}

	
}

