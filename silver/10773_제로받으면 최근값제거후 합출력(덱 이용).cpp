#include <iostream>
#include <deque>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;

	deque <int> d;
	int n;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0)
			d.pop_back();
		else
			d.push_back(n);
	}

	int sum = 0;
	for (int i = 0; i < d.size(); i++) 
		sum += d[i];

	cout << sum;
}