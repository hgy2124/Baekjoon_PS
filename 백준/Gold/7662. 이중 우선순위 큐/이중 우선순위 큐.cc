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

	int t; cin >> t;
	string s;
	int k;
	int num;
	

	while (t--) {
		cin >> k;
		bool check[1000001] = { false };
		priority_queue <pair<int, int>, vector<pair<int, int>>, greater<>> q_l;
		priority_queue <pair<int, int>, vector<pair<int, int>>> q_g;

		for (int i = 0; i < k; i++){
			cin >> s>>num;
			if (s == "D") {
				if (num < 0 && !q_l.empty()) {
					while (!q_l.empty() && check[q_l.top().second]) {
						q_l.pop();
					}
					if (!q_l.empty()) {
						check[q_l.top().second] = 1;
						q_l.pop();
					}
				}
				else if(!q_g.empty()) {
					while (!q_g.empty() && check[q_g.top().second]) {
						q_g.pop();
					}
					if (!q_g.empty()) {
						check[q_g.top().second] = 1;
						q_g.pop();
					}
				}
			}
			else {
				q_g.push({ num,i });
				q_l.push({ num,i });
			}

		}
		while (!q_l.empty() && check[q_l.top().second])
			q_l.pop();
		while (!q_g.empty() && check[q_g.top().second])
			q_g.pop();

		if (q_g.empty())
			cout << "EMPTY"<<"\n";
		else
			cout << q_g.top().first<< " " << q_l.top().first << "\n";
	}


}