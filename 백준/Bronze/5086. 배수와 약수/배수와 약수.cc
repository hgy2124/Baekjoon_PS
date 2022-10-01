#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m; 
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		else {
			if (m % n == 0)
				cout << "factor"<<"\n";
			else if (n % m == 0)
				cout << "multiple"<<"\n";
			else
				cout << "neither"<<"\n";
		}
	}
}