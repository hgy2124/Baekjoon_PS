#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m; cin >> m;

	string s;
	int num;
	int sets[21]={0,};
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (s == "add") {
			cin >> num;
			sets[num] = num;
		}
		else if (s == "remove") {
			cin >> num;
			sets[num] = 0;
		}
		else if (s == "check") {
			cin >> num;
			if(sets[num]==0)
				cout << 0<<"\n";
			else
				cout << 1<<"\n";
			
		}
		else if (s == "toggle") {
			cin >> num;
			if (sets[num] == num)
				sets[num] = 0;
			else
				sets[num] = num;
		}
		else if (s == "all") {
			for (int i = 1; i < 21; i++)
				sets[i] = i;
		}
		else if (s == "empty") {
			for (int i = 0; i < 21; i++)
				sets[i] = 0;
		}
	}

}